#pragma once
#include "Player.h"
class Game
{
public:
	// virtual : �����Լ�, �θ�ü �����͸� �̿��� �ڽİ�ü��
	// �ּҰ��� �����Ҽ� �ִ�.
	virtual void Init();
	virtual void Update();

	shared_ptr<Player> gamePlayer;
};