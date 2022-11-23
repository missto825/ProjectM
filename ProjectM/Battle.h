#pragma once
#include "pch.h"
#include "Monster.h"
#include "Game.h"
#include "Scene.h"
#include "SpriteSheet.h"
class Battle :public Game,public Scene
{
public:

	shared_ptr<Monster> _enemy;
	


	shared_ptr<HWND> _attackButton;
	shared_ptr<HWND> _defenceButton;
	shared_ptr<HWND> _runButton;

public:
	void InBattle(shared_ptr<Monster> enemy);


protected:


	shared_ptr<SpriteSheet> sprites;
	shared_ptr<SpriteSheet> backGround;

	int frame = 0;
public:
	
	void Load() override;
	void Unload() override;
	void Render(shared_ptr<Graphics> gfx) override;
	void Update() override;
};
// ��ī��
// 1. �÷��̾�� ���� �ο�ٴ�  ������ �����ϰ� ���� Ŭ����

//ex.player hp attack Attack() qkq felid 
//2. 