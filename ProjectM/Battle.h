#pragma once
#include "Monster.h"
#include "Game.h"
class Battle :public Game
{
public:
	shared_ptr<Monster> _enemy;
	


public:
	void InBattle(shared_ptr<Monster> enemy);
};
// ��ī��
// 1. �÷��̾�� ���� �ο�ٴ�  ������ �����ϰ� ���� Ŭ����

//ex.player hp attack Attack() qkq felid 
//2. 