#include "pch.h"
#include "Battle.h"


// 1. �۾��ڸ� �Ѹ� �� ����ؼ� �����ǿ����� ��Ű��, 
// �÷��̾��� ������ ����Ѵ�.


Battle::Battle(shared_ptr<Player> player, shared_ptr<InputClass> ic) 
{
	_player = player;
	_ic = ic;
}

// 2. �÷��̾� 
void Battle::InBattle(shared_ptr<Monster> enemy)
{
	this->Load();
	_enemy = enemy;
	

	_enemy->currentHp = enemy->_hp;
	while (true)
	{
		//��ư�� �����°��� ��޸��� 
		//��ư�� ����� ���ȴ��� �޾ƿ´�
		//��ư�� ������ �Ǿ����� �÷��̾��ൿ�� �����Ѵ�
		//
		int select = 0;
		int eSelect = _enemy->Action();
		if (_ic->IsKeyDown(65))
		{
			select = 1;
		}
		
		//�¿�
		//����
		switch (select)
		{
		case ATTACK:
			_player->Attack(_enemy,eSelect);
			break;
		case DEFENCE:
			_player->Defence(_enemy,eSelect);
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
			_enemy->Attack(_player,select); //�ΰ��� ���·� �����
			break;
		case DEFENCE:
			_enemy->Defence(_player, select);
			break;
		default:
			break;
		}
		if (_player->currentHp <= 0)
		{
			_player->PlayerDead();
			break;
		}

	}
}



void Battle::Load()
{
	sprites = make_shared<SpriteSheet>(L"../Resource/����/�ʷϴ�����.png", gfx, 28, 20);
	backGround = make_shared<SpriteSheet>(L"../Resource/���/�쳻�ý� ��.png", gfx,true);
	frame = 0;
	player = make_shared<SpriteSheet>(L"../Resource/�÷��̾�/walk.png", gfx, 73, 75);
	hpbarbar = make_shared<SpriteSheet>(L"../Resource/UI/HP��.png", gfx);
	hpbar = make_shared<SpriteSheet>(L"../Resource/UI/HP����.png",gfx);
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

	// if �÷��̾ ������������ ������
	//xy ���� ���� 
	player->Draw((frame / 10) % 4, 400,455) ;
	hpbar->Draw(363,393,80,30);
	hpbarbar->Draw(363, 393,80,30);
	sprites->Draw(true);
}

void Battle::Update()
{
	frame++;
}
