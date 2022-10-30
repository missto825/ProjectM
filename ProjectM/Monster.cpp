#include "pch.h"
#include "Monster.h"
#include "Player.h"
Monster::Monster(int str, int dex,int luk,int inti)
{
	this->_Stat._str = str;
	this->_Stat._dex = dex;
	this->_Stat._luk = luk;
	this->_Stat._int = inti;
}
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
