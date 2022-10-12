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
		//버튼이 눌리는것을 기달리며
		//버튼이 어느게 눌렸는지 받아온다
		int select = 0;
		int eSelect = _enemy->Action();
		//승열
		//아현
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
			_enemy->Attack(p); //두가지 형태로 만들것
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
	
	sprites = make_shared<SpriteSheet>(L"../Resource/달팽이/적.png", gfx, 28, 20);

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
