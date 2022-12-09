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

	//��� Ű���� ������ ���� ���·� �ʱ�ȭ�մϴ�.
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
	//Ű�� �������ٸ� �� ���¸� �迭�� �����մϴ�.
	m_keys[input] = false;
	return;
}

bool InputClass::IsKeyDown(unsigned int key)
{
	//���� Ű�� ����/�� �������� ��ȯ�մϴ�.
	return m_keys[key];
}
