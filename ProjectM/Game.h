#pragma once
#include "Player.h"
#include "Graphics.h"
class Game
{
public:
	// virtual : �����Լ�, �θ�ü �����͸� �̿��� �ڽİ�ü��
	// �ּҰ��� �����Ҽ� �ִ�.
	virtual void Init(HWND hWnd);
	virtual void Update();

	// FPS ǥ��
	void ShowFps();
	void PlayerSelect(PlayerClass);
	// �÷��̾� Get �Լ�
	shared_ptr<Player> GetPlayer() { return _gamePlayer; };

	//���� �������� �ڵ�
	HWND _hWnd;
	// �׷��� ó�� Ŭ����
	shared_ptr<Graphics> graphics;
	// ������ �÷��̾�
	shared_ptr<Player> _gamePlayer;
};