#include "pch.h"
#include "Battle.h"


// 1. �۾��ڸ� �Ѹ� �� ����ؼ� �����ǿ����� ��Ű��, 
// �÷��̾��� ������ ����Ѵ�.

// 2. �÷��̾� 
void Battle::InBattle(shared_ptr<Monster> enemy)
{
	_enemy = enemy;
	shared_ptr<Player> p = GetPlayer();


	while (true)
	{
		//��ư�� �����°��� ��޸���
		//��ư�� ����� ���ȴ��� �޾ƿ´�
		int select = 0;
		int eSelect = _enemy->Action();
		//�¿�
		//����
		switch (select)
		{
		case ATTACK:
			p->Attack(_enemy,eSelect);
			break;
		case DEFENCE:
			p->Defence(_enemy,eSelect);
			break;
		case RUN:
			return;
		default:
			break;
		}
		if (_enemy->_hp <= 0)
			_enemy->MonsterDead();
		switch (eSelect)
		{
		case ATTACK:
			_enemy->Attack(p,select); //�ΰ��� ���·� �����
			break;
		case DEFENCE:
			_enemy->Defence(p, select);
			break;
		default:
			break;
		}
		if (p->_hp <= 0)
			p->PlayerDead();

	}
}