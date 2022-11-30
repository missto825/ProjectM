#include "pch.h"
#include "Battle.h"


// 1. 작업자를 한명 더 고용해서 몬스터의연산을 시키고, 
// 플레이어의 선택을 대기한다.


// 2. 플레이어 
void Battle::InBattle(shared_ptr<Monster> enemy)
{
	this->Load();
	_enemy = enemy;
	shared_ptr<Player> p = GetPlayer(); 

	_enemy->currentHp = enemy->_hp;
	while (true)
	{
		//버튼이 눌리는것을 기달리며 
		//버튼이 어느게 눌렸는지 받아온다
		//버튼이 선택이 되었을때 플레이어행동을 선택한다
		//
		int select = 0;
		int eSelect = _enemy->Action();
		//승열
		//아현
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
			_enemy->Attack(p,select); //두가지 형태로 만들것
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
	sprites = make_shared<SpriteSheet>(L"../Resource/몬스터/초록달팽이.png", gfx, 28, 20);
	backGround = make_shared<SpriteSheet>(L"../Resource/배경/헤내시스 맵.png", gfx,true);
	frame = 0;
	player = make_shared<SpriteSheet>(L"../Resource/플레이어/walk.png", gfx, 73, 75);
	hpbarbar = make_shared<SpriteSheet>(L"../Resource/UI/HP바.png", gfx);
	hpbar = make_shared<SpriteSheet>(L"../Resource/UI/HP내부.png",gfx);
}

void Battle::Unload()
{
	sprites = 0;
	backGround = 0;
}

void Battle::Render(shared_ptr<Graphics> gfx)
{
	backGround->Draw(true);
	sprites->Draw((frame / 10) % 4, 900, 560);

	// if 플레이어가 도달했을때만 렌더링
	player->Draw((frame / 10) % 4, 400,455) ;
	hpbar->Draw(true);
	hpbarbar->Draw(true);
	sprites->Draw(true);
}

void Battle::Update()
{
	frame++;
}
