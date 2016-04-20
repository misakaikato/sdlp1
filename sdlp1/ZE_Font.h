#pragma once
#include <string>
#include <deque>
#include <SDL\SDL_ttf.h>

using namespace std;

class Font
{
public:
	Font(string, string);
	~Font();
	TTF_Font* getFont(int size = 15);
	string name;

private:
	//����������������治ͬ���ֺ�
	TTF_Font* mFont[100];
	string mPath;

	void setNewSizeOfFont(int);
};