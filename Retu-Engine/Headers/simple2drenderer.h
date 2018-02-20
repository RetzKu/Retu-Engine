namespace Engine { 

	class Simple2DRenderer : public Renderer2D
	{
	private:
		std::deque<const StaticSprite*> _renderQueue;

	public:
		void submit(const Renderable2D* renderable) override;
		void flush() override;

	};
}