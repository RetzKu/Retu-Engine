namespace Engine {

	class StaticSprite : public Renderable2D
	{
	private:
		VertexArray* _vertexArray;
		IndexBuffer* _indexBuffer;
		Shader& _shader;
	public:
		StaticSprite(float x, float y, float width, float height, const vec4& color, Shader& shader);
		~StaticSprite();

		inline const VertexArray* getVAO() const { return _vertexArray; }
		inline const IndexBuffer* getIBO() const { return _indexBuffer; }
		inline Shader& getShader() const { return _shader; }

	};
}