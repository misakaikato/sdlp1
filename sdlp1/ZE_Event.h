#pragma once
#include <deque>
#include <functional>
#include <SDL\SDL.h>
#include "ZE_EventDispatcher.h"

using namespace std;

//�¼�ͳ����
//����eventDispatcher����ע�����ʱ�������ø����add����
//����������ָ�뽫�ᱻ������ͳ������������¼���ͶԱ�Ȼ�󰤸�����
class Event
{
public:
	void handleEvent();
	void addEventFunction(SDL_EventType type, EventDispatcher*, function<void(SDL_Event)>);
	void removeEventFunction(SDL_EventType type, EventDispatcher*, function<void(SDL_Event)>);
	void removeEventsOfObject(SDL_EventType type, EventDispatcher*);
	void removeAllEventOfObject(EventDispatcher*);

	/*Ҳ��֪��д���ģ���д�������
	SDL�ܻ���������ZEĿǰ��������¼���֧�ֲ��Ǻܺ�
	��Ϊ���е��¼������ɸ���ͳһ���ȴ���ģ�Ҳ����˵
	��һ������¼�������ʱ����ֻ����������ע��ķ����ɷ����¼�
	Ҳ����˵������ͼ��ı�����Σ���ʹAԪ�ر�BԪ�ظ��ţ�AԪ��Ҳ����յ�����¼�
	���仰˵�����ǲ����ڡ���ס��ꡱ�ĸ���
	���������ʵ�ָо���ܸ��ӣ���Ϊ��Ŀǰ��״����������ֻ���ڴ���ʱ������������һ��������̨Ԫ�أ�
	����֪��˭��ס��˭�����߷������events���飬Ȼ��ֻ�ɷ�һ��֮���
	��֮Ŀǰ�Ȳ�����*/

private:
	//�������е��¼�
	deque<EventData> AllEvents;
};