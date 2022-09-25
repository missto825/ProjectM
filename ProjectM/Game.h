#pragma once
#include "Player.h"
class Drawing;
class Game
{
public:
	// virtual : �����Լ�, �θ�ü �����͸� �̿��� �ڽİ�ü��
	// �ּҰ��� �����Ҽ� �ִ�.
	virtual void Init(HWND hWnd);
	virtual void Update();

	void ShowFps();
	shared_ptr<Drawing> GetPalette() { return _draw; };
	shared_ptr<Player> GetPlayer() { return _gamePlayer; };

	HWND _hWnd;
	shared_ptr<Drawing> _draw;
	shared_ptr<Player> _gamePlayer;
};