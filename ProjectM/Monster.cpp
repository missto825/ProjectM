#include "pch.h"
#include "Monster.h"

void Monster::InMonster() {

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

DWORD __stdcall Monster::Attack(shared_ptr<Player> enemy)
{
}
