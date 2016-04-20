#pragma once
#include <SDL\SDL.h>
#include "ZE_AssetManager.h"
#include "ZE_TextureContainer.h"

using namespace std;

class TextField : public TextureContainer
{
public:
	string Text;
	unsigned int EffectLevel;
	int FontSize;
	SDL_Color TextColor;
	AssetManager* Ass;
	string FontName;

	TextField(string text_f, unsigned int effectLevel_f = 0, int fontSize_f = 20, SDL_Color textColor_f = { 0, 0, 0 },
		AssetManager* ass_f = NULL, string fontName_f = "");
	~TextField();
	void changeText(string);
};