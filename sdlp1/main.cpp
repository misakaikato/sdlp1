////////////////////////////////////////////////////////////
//���е������ʾ��������ע�Ͷ�д����/����/������������һ��//
//˵���׳���֮��Ҳ��һ�������������������...             //
////////////////////////////////////////////////////////////

#include "ZE_Core.h"

#ifdef _DEBUG
#include <vld.h>
#endif // _DEBUG

#include "mygame.h"

using namespace std;

const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

ZeroEngine ZEROENG;
mygame game;

int main(int argc, char* args[])
{
	ZEROENG.Init(u8"��TM������һ��SDL���ڻ���һ��TM��Ӣ��ȫ��ǻ�ϱ���Ĵ����Բۣ�!��", SCREEN_WIDTH, SCREEN_HEIGHT, true);

	//����������̨Ĭ����ɫ��Ҳûʲô����
	ZEROENG.stageColor = { 0, 0, 0 };

	game.Init();

	ZEROENG.Start(&game);

	return 0;
}