namespace Engine { 


	class Renderer2D
	{
	protected:
		std::vector<mat4> _transformationStack;
		const mat4* _transformationBack;
	protected:
		Renderer2D()
		{
			_transformationStack.push_back(mat4::identity());
			_transformationBack = &_transformationStack.back();
		}
	public:
		// Lis�t��n kamaa transformation st�kkiin
		// Bool defaulttina false, jos true -> override
		void push(const mat4& matrix, bool override = false)
		{
			// Ei kerrota matriisia .b�ckill�()
			if(override)
			{
				_transformationStack.push_back(matrix);
			}
			else
			{
				_transformationStack.push_back(_transformationStack.back() * matrix);
			}

			_transformationBack = &_transformationStack.back();

		}
		// Poistetaan viimeinen
		void pop()
		{
			// Jos siell� on muutakin kuin mat4::identity()
			if(_transformationStack.size() > 1)
			{
				_transformationStack.pop_back();
			}

			_transformationBack = &_transformationStack.back();

			// TODO: T�� pit�� logata my�hemmin
		}

		virtual void begin(){}
		virtual void end(){}
		virtual void drawString(const std::string& text,const vec3& position,const vec4& color) {}
		virtual void submit(const Renderable2D* renderable) = 0;
		virtual void flush() = 0;
	
	};
}