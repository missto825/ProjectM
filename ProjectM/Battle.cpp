#include "pch.h"
#include "Battle.h"


// 1. 작업자를 한명 더 고용해서 몬스터의연산을 시키고, 
// 플레이어의 선택을 대기한다.

// 2. 플레이어 
void Battle::InBattle(shared_ptr<Monster> enemy)
{
	_enemy = enemy;
	shared_ptr<Player> p = GetPlayer();


	while (true)
	{
		int select = 0;
		int eSelect = _enemy->Action();
		switch (select)
		{
		case ATTACK:
			p->Attack(_enemy);
			if (_enemy->hp <= 0)
				_enemy->MonsterDead();
			break;
		case DEFENCE:
			p->Defence(_enemy,eSelect);
			break;
		case RUN:
			p->Run();
			return;
			
		default:
			break;
		}
		switch (eSelect)
		{
		case ATTACK:
			_enemy->Attack(p);
			if (p->hp <= 0)
				p->PlayerDead();
			break;
		case DEFENCE:
			break;
		default:
			break;
		}

	}
}
