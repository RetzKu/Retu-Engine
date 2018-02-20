#include "layer.h"


namespace Engine { 

Layer::Layer(Shader* shader)
{
	_renderer = new BatchRenderer2D();
	_shader = shader;
	_projectionMatrix = mat4::orthographic(-16.0f, 16.0f, -9.0f, 9.0f, -1.0f, 1.0f);

	_shader->enable();
	_shader->setUniformMat4("pr_matrix", _projectionMatrix);
	_shader->disable();
}

Layer::~Layer()
{
	delete _renderer;
	delete _shader;

	for(int i = 0; i < _renderables.size(); i++)
	{
		delete _renderables[i];
	}
}

void Layer::add(Renderable2D* renderable)
{
	_renderables.push_back(renderable);
}

void Layer::render()
{
	_shader->enable();
	_renderer->begin();
	for(const Renderable2D* renderable : _renderables)
	{
		renderable->submit(_renderer);
	}

	_renderer->end();
	_renderer->flush();
}
}