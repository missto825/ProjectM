#pragma once
#include "Entity.h"
#include "Player.h"
class Monster :public Entity
{

// fread �� ���� �� ������
Monster(int hp,)
public:
    int _attackCase;
    int _defenceCase;



public:
    int Action();
    void MonsterDead();
    

};