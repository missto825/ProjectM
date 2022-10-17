#pragma once
#include "Entity.h"
#include "Player.h"
class Monster :public Entity
{

// fread 전 대충 쓸 생성자
Monster(int hp,)
public:
    int _attackCase;
    int _defenceCase;



public:
    int Action();
    void MonsterDead();
    

};