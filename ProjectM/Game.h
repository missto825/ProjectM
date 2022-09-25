#pragma once
#include "Player.h"
class Drawing;
class Game
{
public:
	// virtual : 가상함수, 부모객체 포인터를 이용해 자식객체의
	// 주소값에 접근할수 있다.
	virtual void Init(HWND hWnd);
	virtual void Update();

	void ShowFps();
	shared_ptr<Drawing> GetPalette() { return _draw; };
	shared_ptr<Player> GetPlayer() { return _gamePlayer; };

	HWND _hWnd;
	shared_ptr<Drawing> _draw;
	shared_ptr<Player> _gamePlayer;
};