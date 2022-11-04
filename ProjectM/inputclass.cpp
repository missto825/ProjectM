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
	switch (wParam)//����Ű ó��
	case VK_NUMPAD1:
		PlayerSelect(PlayerClass)
			break;
		//Ű�� ���ȴٸ� �� ���¸� �迭�� �����մϴ�.
		m_keys[input] = true;
		return;
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
