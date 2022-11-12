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
	char _Name; //이름
	int _basicweapon; //기본무기

    void IsPlayerDead();
    void PlayerDead();

};