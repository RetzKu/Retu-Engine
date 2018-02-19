#pragma once

#include "renderable2d.h"

namespace Engine {

	class Sprite : public Renderable2D
	{
	private:

	public:
		Sprite(float x, float y, float width, float height, const vec4& color);
		Sprite(float x, float y, float width, float height, Texture* texture);
	
	};
}