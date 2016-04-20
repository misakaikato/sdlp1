#pragma once
#include <string>

using namespace std;

//��������
//Ŀǰ����ֻ��������ַ������ѣ��Ժ���ܻᵯ�����ڣ����
class Error
{
public:
	//��������DEBUG����̨���һ����Ϣ���ڶ���������ʾ�Ƿ�ͬʱ��������̨���
	void PopToDebutConsole(string msg, bool mainConsole = true);
	//���һ��������Ϣ�����˳�
	void PopDebutConsole_Warning(string msg);
	//����һ��һ����󣬽���һ��������Ϣ�ַ���
	void PopDebugConsole_Error(string msg, bool quit = true);
	//����һ��SDL���󣬽���һ��������Ϣ�ַ�����������SDL������Ϣ
	void PopDebugConsole_SDLError(string msg, bool quit = true);
	//����һ��SDL_Image���󣬽���һ��������Ϣ�ַ�����������SDL_Image������Ϣ
	void PopDebugConsole_SDL_ImageError(string msg, bool quit = true);
	//����һ��SDL_ttf���󣬽���һ��������Ϣ�ַ�����������SDL_ttf������Ϣ
	void PopDebugConsole_SDL_ttfError(string msg, bool quit = true);
	//����һ��SDL_Mixer���󣬽���һ��������Ϣ�ַ�����������SDL_Mixer������Ϣ
	void PopDebugConsole_SDL_MixerError(string msg, bool quit = true);
};
