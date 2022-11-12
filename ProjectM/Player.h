#pragma once
#include "Entity.h"
#include "Monster.h"

class PlayerClass;

class Player : public Entity
{
public:
	shared_ptr<PlayerClass> _playerClass;

	Stat playerStat;
	int playerClass;
	char _Name; //�̸�
	int _basicweapon; //�⺻����

    void IsPlayerDead();
    void PlayerDead();

};