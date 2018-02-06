#include <glfw3.h>
#define __glew_h__
#include <glew.h>
#include "window.h"

#include <Windows.h>

int main()
{
	using namespace Graphics;
	Window* MainWindow = new Window("Engine", 960, 540);

	bool running = true;
	while (running)
	{
		if (GetAsyncKeyState(VK_ESCAPE) == -32767)
		{
			running = false;
		}
	}
}