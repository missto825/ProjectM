#pragma once
#include "Entity.h"
#include "Monster.h"


class Player : public Entity
{
public:
	Player();
	int _playerClass;

	Stat playerStat;
	int playerClass;
	char _Name; //�̸�
	int _basicweapon; //�⺻����

    void IsPlayerDead();
    void PlayerDead();

};