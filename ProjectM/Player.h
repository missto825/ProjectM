#pragma once
#include "Entity.h"
#include "Monster.h"
#include "PlayerClass.h"
struct Stat
{

	int _str;
	int _dex;
	int _luk;
	int _int;
};

class Player : public Entity
{
public:
	Player();
	Stat _playerStat;
	shared_ptr<PlayerClass> _playerClass;

	
    void IsPlayerDead();
    void PlayerDead();

};