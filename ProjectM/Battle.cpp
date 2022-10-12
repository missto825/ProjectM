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
			p->Attack(_enemy);
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
			_enemy->Attack(p); //�ΰ��� ���·� �����
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



void Battle::Load()
{
	y = ySpeed = 0.0f;
	
	sprites = make_shared<SpriteSheet>(L"../Resource/������/��.png", gfx, 28, 20);

	frame = 0;

}

void Battle::Unload()
{
}

void Battle::Render(shared_ptr<Graphics> gfx)
{
	gfx->ClearScreen(1.0f, 1.0f, 1.0f);
	gfx->DrawCircle(325.0f, y, 50.0f, 0.2f, 0.7f, 0.07f, 1.0f);
	gfx->DrawCircle(725.0f, y, 50.0f, 0.2f, 0.7f, 0.07f, 1.0f);

	////sprites->
	sprites->Draw((frame / 10) % 4, 40, 40);
}

void Battle::Update()
{
	ySpeed += 1.0f;
	y += ySpeed;
	if (y > 600)
	{
		y = 600;
		ySpeed = -30.0f;
	}
	frame++;
}
