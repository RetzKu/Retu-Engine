#include <glfw3.h>
#define __glew_h__
#include <glew.h>
#include "window.h" //for Window class
#include <Windows.h> //Windows32 header for getasync

/*Engine headers*/
#include "MikaTestijuttuja.h"
#include "Maths.h"
#include "fileutils.h"
#include "Shader.h"
#include "tilelayer.h"

using namespace Engine;

int main()
{
	Window* MainWindow = new Window("Engine", 960, 540);

	Shader* s = new Engine::Shader("basic.vert", "basic.frag");
	Shader& shader = *s;
	shader.enable();

	// Heitet‰‰n shadereill‰ valotusta
	shader.setUniformMat2f("light_pos", vec2(4.0f, 1.5f));

	// Tehd‰‰n layeri
	TileLayer layer(&shader);

	bool running = true;
	while (running)
	{
		if (GetAsyncKeyState(VK_ESCAPE) == -32767)
		{
			running = false;
		}
	}
	delete s;
}