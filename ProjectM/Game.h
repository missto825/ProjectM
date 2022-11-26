#pragma once
#include "Player.h"
#include "Graphics.h"
#include "inputclass.h"
class Game
{
public:
	// virtual : �����Լ�, �θ�ü �����͸� �̿��� �ڽİ�ü��
	// �ּҰ��� �����Ҽ� �ִ�.
	virtual void Init(HWND hWnd, shared_ptr<InputClass> ic);
	virtual void Update();

	// FPS ǥ��
	void ShowFps();
	void PlayerSelect(int select, shared_ptr<Player> _gamePlayer);
	// �÷��̾� Get �Լ�
	shared_ptr<Player> GetPlayer() { return _gamePlayer; };

	//���� �������� �ڵ�
	HWND _hWnd;
	//Ű�Է� ó�� ��ü
	shared_ptr<InputClass> _ic;
	// �׷��� ó�� Ŭ����
	shared_ptr<Graphics> graphics;
	// ������ �÷��̾�
	shared_ptr<Player> _gamePlayer;
};