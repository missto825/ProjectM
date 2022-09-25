#pragma once
#include "Monster.h"
#include "Game.h"
class Battle :public Game
{
public:
	shared_ptr<Monster> _enemy;
	


public:
	void InBattle(shared_ptr<Monster> enemy);
};
// 피카츄
// 1. 플레이어와 몬스터 싸운다는  시점을 가정하고 생긴 클래스

//ex.player hp attack Attack() qkq felid 
//2. 