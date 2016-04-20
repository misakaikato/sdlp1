#include <Windows.h>
#include <SDL\SDL.h>
#include <SDL\SDL_image.h>
#include <SDL\SDL_ttf.h>
#include <SDL\SDL_mixer.h>
#include <iostream>
#include <string>
#include "ZE_Error.h"

using namespace std;

void Error::PopToDebutConsole(string msg, bool mainConsole)
{
	OutputDebugStringA(msg.c_str());
	if (mainConsole)
		cout << msg << endl;
}

void Error::PopDebutConsole_Warning(string msg)
{
	OutputDebugStringA(("Warning: " + msg + "\n").c_str());
}

void Error::PopDebugConsole_Error(string msg, bool quit)
{
	OutputDebugStringA("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
	OutputDebugStringA((msg + "\n").c_str());
	OutputDebugStringA("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
	if (quit)
	{
		exit(1);
	}
}

void Error::PopDebugConsole_SDLError(string msg, bool quit)
{
	//��SDL����ʱ��������ʱʹ��SDL_GetError()������ô�����Ϣ
	OutputDebugStringA("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
	OutputDebugStringA((msg + "[SDL Error: " + SDL_GetError() + "]\n").c_str());
	OutputDebugStringA("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
	if (quit)
	{
		exit(1);
	}
}

void Error::PopDebugConsole_SDL_ImageError(string msg, bool quit)
{
	//��SDL_Image����ʱ��������ʱʹ��IMG_GetError()������ô�����Ϣ
	OutputDebugStringA("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
	OutputDebugStringA((msg + "[SDL_Image Error: " + IMG_GetError() + "]\n").c_str());
	OutputDebugStringA("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
	if (quit)
	{
		exit(1);
	}
}

void Error::PopDebugConsole_SDL_ttfError(string msg, bool quit)
{
	//��SDL_ttf����ʱ��������ʱʹ��TTF_GetError()������ô�����Ϣ
	OutputDebugStringA("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
	OutputDebugStringA((msg + "[SDL_ttf Error: " + TTF_GetError() + "]\n").c_str());
	OutputDebugStringA("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
	if (quit)
	{
		exit(1);
	}
}

void Error::PopDebugConsole_SDL_MixerError(string msg, bool quit)
{
	//��SDL_Mixer����ʱ��������ʱʹ��Mix_GetError()������ô�����Ϣ
	OutputDebugStringA("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
	OutputDebugStringA((msg + "[SDL_Mixer Error: " + Mix_GetError() + "]\n").c_str());
	OutputDebugStringA("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
	if (quit)
	{
		exit(1);
	}
}