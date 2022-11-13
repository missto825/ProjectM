#include "inputclass.h"
#include "pch.h"
#include "Game.h"


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
		PlayerSelect(WARRIOR,this->_gamePlayer);
			break;
	case VK_NUMPAD2:
		PlayerSelect(MAGE, this->_gamePlayer);
		break;
	case VK_NUMPAD3:
		PlayerSelect(ACHER, this->_gamePlayer);
		break;
	case VK_NUMPAD4:
		PlayerSelect(THIEF, this->_gamePlayer);
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
