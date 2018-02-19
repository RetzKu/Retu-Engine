#pragma once

#include <glew.h>

namespace Engine { 

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