#pragma once
#include "Entity.h"
#include "Monster.h"
#include "PlayerClass.h"

class Player : public Entity
{
public:
	Player();
	shared_ptr<PlayerClass> _playerClass;

	
    void IsPlayerDead();
    void PlayerDead();

};