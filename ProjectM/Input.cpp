#include "pch.h"
#include "Input.h"

void Input::KeyDown(WPARAM wparam)
{
	switch (wParam)//����Ű ó��
	case VK_NUMPAD1:
		InThief()
			break;
}

void Input::KeyUp(WPARAM wparam)
{

}

Input::Input()
{

}

Input::Input(const Input& other)
{
}

Input::~Input()
{
}

