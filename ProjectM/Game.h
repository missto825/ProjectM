#pragma once
#include "Player.h"
class Game
{
public:
	// virtual : 가상함수, 부모객체 포인터를 이용해 자식객체의
	// 주소값에 접근할수 있다.
	virtual void Init();
	virtual void Update();

	shared_ptr<Player> gamePlayer;
};