#pragma once
#include "Game.h"
#ifndef _INPUTCLASS_H_
#define _INPUTCLASS_H_


class InputClass:public Game
{
public:
public:
	InputClass();
	InputClass(const InputClass&);
	~InputClass();

	void Initalize();

	void KeyDown(unsigned int);
	void KeyUp(unsigned int);

	bool IsKeyDown(unsigned int);
	
private:
	bool m_keys[256];
};

#endif // !_INPUTCLASS_H_
