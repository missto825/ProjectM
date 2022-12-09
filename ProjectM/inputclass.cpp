#include "pch.h"
#include "inputclass.h"
#include "Game.h"


InputClass::InputClass()
{
	Initalize();
}

InputClass::InputClass(const InputClass&)
{
	Initalize();
}

InputClass::~InputClass()
{
}

void InputClass::Initalize()
{
	int i;

	//모든 키들을 눌리지 않은 상태로 초기화합니다.
	for (i = 0; i < 256; i++)
	{
		m_keys[i] = false;
	}

	return;
}

void InputClass::KeyDown(unsigned int input)
{
	m_keys[input] = true;
}

void InputClass::KeyUp(unsigned int input)
{
	//키가 떼어졌다면 그 상태를 배열에 저장합니다.
	m_keys[input] = false;
	return;
}

bool InputClass::IsKeyDown(unsigned int key)
{
	//현재 키가 눌림/뗌 상태인지 반환합니다.
	return m_keys[key];
}
