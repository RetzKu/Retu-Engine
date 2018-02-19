#pragma once

#include "renderable2d.h"

namespace Engine{
	class Label : public Renderable2D
	{
	public:	
		Label(std::string text, float x, float y, vec4 color);
		void submit(Renderer2D* renderer)const override;

		std::string Text;
		float x, y;
		vec3& Position;
	};
}
