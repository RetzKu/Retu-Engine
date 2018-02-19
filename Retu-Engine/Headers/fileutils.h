#pragma once 
#define _CRT_SECURE_NO_WARNINGS 1
//#define STB_IMAGE_IMPLEMENTATION

#include <string>
#include <fstream>
#include <iostream>
#include "timer.h"
#include "stb_image.h"

namespace Engine {

	// Filun luku

	class FileUtils
	{
	public:
		static std::string read_file(const char* filepath);
		static unsigned char* LoadTextureFromFile(const std::string Filename);
		int CoutFPS();
	private:
		Timer time;
		float timer = 0.0f;
		unsigned int frames = 0;
	};
}