#include "SDL.h"

#pragma comment(lib, "SDL2main.lib")
#pragma comment(lib, "SDL2.lib")


#include "MyEngine.h"


int SDL_main(int agrc, char* argv[])
{
	GEngine->Initialize();

	GEngine->Run();

	GEngine->Terminalize();

	delete GEngine;

	return 0;
}