#include "Label.h"

namespace Engine {
	
    Label::Label(std::string text, float x, float y, vec4 color) : Renderable2D(), Position(_position), Text(text)
	{
		_position = vec3(x, y, 0);
		_color = color;
	}
	
	void Label::submit(Renderer2D* renderer) const
	{
		renderer->drawString(Text, _position, _color);
	}
}