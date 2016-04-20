#pragma once
#include <functional>
#include <SDL\SDL.h>

using namespace std;

//���п�ע���¼���Ļ���
class EventDispatcher
{
public:
	virtual ~EventDispatcher();
	void addEventListener(SDL_EventType type, function<void(SDL_Event)>);
	void removeEventListeners(SDL_EventType type);
	void removeAllEvents();
};

//��eventDispatcher���õ�Ԫ�ؽṹ��
struct EventData
{
	SDL_EventType type;
	EventDispatcher* signedObject;
	function<void(SDL_Event)> func;
};