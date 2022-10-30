#pragma once
#include "Player.h"
#include "Graphics.h"
class Drawing;
class Game
{
public:
	// virtual : �����Լ�, �θ�ü �����͸� �̿��� �ڽİ�ü��
	// �ּҰ��� �����Ҽ� �ִ�.
	virtual void Init(HWND hWnd);
	virtual void Update();

	void ShowFps();
	void PlayerSelect(PlayerClass);
	shared_ptr<Drawing> GetPalette() { return _draw; };
	shared_ptr<Player> GetPlayer() { return _gamePlayer; };

	//InitBattle();
	// ��ȣ
	//PlayerSelect();
	shared_ptr<Graphics> graphics;
	HWND _hWnd;
	shared_ptr<Drawing> _draw;
	shared_ptr<Player> _gamePlayer;
};