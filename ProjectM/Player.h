#pragma once
#include "Entity.h"
#include "Monster.h"

class Player : public Entity
{
public:
    void IsPlayerDead();
    void PlayerDead();

};