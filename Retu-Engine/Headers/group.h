namespace Engine { 
	
	 class Group : public Renderable2D
	{
	private:
		std::vector<Renderable2D*> _renderables;
		mat4 _transformationMatrix;
	public:
		Group(const mat4& tranform);
		~Group();
		void add(Renderable2D* renderable);
		void submit(Renderer2D* renderer) const override;
	};
	
}