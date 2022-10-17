#include "pch.h"
#include "Monster.h"
#include "Player.h"
int Monster::Action()
{
	int _case = rand() % 10;
	if (_case <= _attackCase)
	{
		return ATTACK;
	}
	if (_case > 10 - _defenceCase)
	{
		return DEFENCE;
		
	}
}

void Monster::MonsterDead()
{
}
