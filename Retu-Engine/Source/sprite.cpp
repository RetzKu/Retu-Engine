#include "sprite.h"



namespace Engine 
{ 
	Sprite::Sprite(float x, float y, float width, float height, const vec4& color)
		: Renderable2D(vec3(x, y, 0), vec2(width, height), color)
	{		
		
	}

	Sprite::Sprite(float x, float y, float width, float height, Texture* texture)
		: Renderable2D(vec3(x, y, 0), vec2(width, height), vec4(1, 1, 1, 1))
	{
		_texture = texture;
	}

}