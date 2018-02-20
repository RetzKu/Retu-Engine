namespace Engine 
{
	class Layer
	{
	public:
		Layer(Shader* shader);
		virtual ~Layer();
		virtual void add(Renderable2D* renderable);
		virtual void render();
	protected:
		Renderer2D* _renderer;
		std::vector<Renderable2D*> _renderables;
		Shader* _shader;
		mat4 _projectionMatrix;
	};
} 