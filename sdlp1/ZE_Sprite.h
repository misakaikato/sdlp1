#pragma once
#include "ZE_DisplayObject.h"

using namespace std;

//ģ��starling��������sprite��
class Sprite : public DisplayObject
{
public:
	virtual int getWidth();
	virtual int getHeight();

	virtual void Render();
};