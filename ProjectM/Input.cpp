#include "pch.h"
#include "Input.h"

void Input::KeyDown(WPARAM wparam)
{
	switch (wParam)//가상키 처리
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

