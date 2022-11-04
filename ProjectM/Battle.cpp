#include "pch.h"
#include "Battle.h"


// 1. �۾��ڸ� �Ѹ� �� ����ؼ� �����ǿ����� ��Ű��, 
// �÷��̾��� ������ ����Ѵ�.


// 2. �÷��̾� 
void Battle::InBattle(shared_ptr<Monster> enemy)
{
	this->Load();
	_enemy = enemy;
	shared_ptr<Player> p = GetPlayer(); 

	_enemy->currentHp = enemy->_hp;
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
		if (_enemy->currentHp <= 0)
		{
			_enemy->MonsterDead(); 
			break;
		}
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
		if (p->currentHp <= 0)
		{
			p->PlayerDead();
			break;
		}

	}
}



void Battle::Load()
{
	sprites = make_shared<SpriteSheet>(L"../Resource/������/�ʷϴ�����.png", gfx, 28, 20);
	backGround = make_shared<SpriteSheet>(L"../Resource/���/��׽ý�.png", gfx,true);
	frame = 0;

}

void Battle::Unload()
{
}

void Battle::Render(shared_ptr<Graphics> gfx)
{
	backGround->Draw(true);
	sprites->Draw((frame / 10) % 4, 900, 500);
}

void Battle::Update()
{
	frame++;
}
