#include "inputclass.h"
#include "pch.h"
InputClass::InputClass()
{
}

InputClass::InputClass(const InputClass& other)
{
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
	switch (input)//����Ű ó��
	{
	case VK_NUMPAD1:
		PlayerSelect(WARRIOR, _gamePlayer);
			break;
	case VK_NUMPAD2:
		PlayerSelect(MAGE, _gamePlayer);
		break;
	case VK_NUMPAD3:
		PlayerSelect(ACHER, _gamePlayer);
		break;
	case VK_NUMPAD4:
		PlayerSelect(THIEF, _gamePlayer);
		break;
		//Ű�� ���ȴٸ� �� ���¸� �迭�� �����մϴ�.
		m_keys[input] = true;
	}
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
