#pragma once

#include "Maths.h"
#include "indexbuffer.h"
#include "vertexarray.h"
#include "renderer2d.h"
#include "Shader.h"
#include "texture.h"

namespace Engine
	{
		// Kama mitä nakataan shadereille
		struct VertexData
		{
			// Tekstuurin positio
			vec3 vertex;
			// Tekstuuri koordinaatit
			vec2 uv;
			// Tekstuuri ID
			float tid;
			// Tekstuurin väri
			unsigned int color;
		};


		class Renderable2D
		{
		protected:
			vec3 _position;
			vec2 _size;
			vec4 _color;
			std::vector<vec2> _UV;
			Texture* _texture;
		protected:
			Renderable2D() : _texture(nullptr) { setUVDefaults(); }
		public:
			Renderable2D(vec3 position, vec2 size, vec4 color)
				: _position(position), _size(size), _color(color),_texture(nullptr)
			{ setUVDefaults(); }

			virtual ~Renderable2D(){ }

			virtual void submit(Renderer2D* renderer) const
			{
				renderer->submit(this);
			}

			inline const vec3& getPosition() const { return _position; }
			inline const vec2& getSize() const { return _size; }
			inline const vec4& getColor() const { return _color; }
			inline const std::vector<vec2>& getUV() const { return _UV; }

			inline const GLuint getTID() const { return _texture ? _texture->getID() : 0; }
		private:
			void setUVDefaults()
			{
				_UV.push_back(vec2(0, 0));
				_UV.push_back(vec2(0, 1));
				_UV.push_back(vec2(1, 1));
				_UV.push_back(vec2(1, 0));
			}
		};
}