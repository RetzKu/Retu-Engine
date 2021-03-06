namespace Engine { 

	class Buffer
	{
	private:
		GLuint _bufferID;
		GLuint _componentCount;

	public:
		Buffer(GLfloat* data, GLsizei count, GLuint componentCount);
		~Buffer();
		void bind() const;
		void unbind() const;

		inline GLuint getComponentCount() const { return _componentCount; }
	};

	class IndexBuffer
	{
	private:
		GLuint _bufferID;
		GLuint _count;

	public:
		IndexBuffer(GLushort* data, GLsizei count);
		IndexBuffer(GLuint* data, GLsizei count);
		~IndexBuffer();
		void bind() const;
		void unbind() const;

		inline GLuint getCount() const { return _count; }
	};
} 