#include <iostream>
#include <glew.h>
#include <glfw3.h>

namespace Engine 
{
#define MAX_KEYS 1024 // just in case some chinese has 1024 key keyboard
#define MAX_BUTTONS 32 // same for mouse. too big array but just in case.
	class Window
	{
	private:
		//osaa varmaan jokanen lukea.
		const char *_title;
		GLFWwindow *_window;
		bool _Closed; // onko ikkuna auki vai ei

		int _width, _height;
		static bool _buttons[MAX_BUTTONS];
		static bool _mousestate[MAX_BUTTONS];
		static bool _mouseclicked[MAX_BUTTONS];
		static bool _keys[MAX_KEYS];
		static bool _keystate[MAX_KEYS];
		static bool _keytyped[MAX_KEYS];
		static double _mouseX, _mouseY;


	public:
		Window(const char *title, int width, int height);
		~Window();
		void clear() const;
		void update();
		bool closed() const;

		inline int getWidth() const { return _width; } //ei kutsuta mit‰‰n funktiota vaan tehd‰‰n jokin toimenpide. esim t‰ss‰ return width;
		inline int getHeight() const { return _height; } // return height;

		static bool isKeyPressed(unsigned int keycode);
		static bool isKeyTyped(unsigned int keycode);
		static bool isButtonPressed(unsigned int button);
		static bool isMouseButtonClicked(unsigned int button);
		static void GetMousePosition(double& x, double& y);
		bool init();
		static void WindowResize(GLFWwindow* Window, int width, int height);
		static void key_callback(GLFWwindow* Window, int key, int scancode, int action, int mods);
		static void button_callback(GLFWwindow* Window, int button, int action, int mods);
		static void cursor_callback(GLFWwindow* Window, double MouseX, double MouseY);


	};
}
