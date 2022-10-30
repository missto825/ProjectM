#pragma once
#include "Entity.h"
#include "Player.h"
class Monster :public Entity
{
public:
// fread 전 대충 쓸 생성자
    Monster(int str, int dex,int luk, int inti);
public:
    int _attackCase;
    int _defenceCase;



public:
    int Action();
    void MonsterDead();
    

};