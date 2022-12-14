#pragma once
#include "pch.h"
#include "Monster.h"
#include "Game.h"
#include "Scene.h"
#include "SpriteSheet.h"
#include "inputclass.h"
class Battle :public Scene
{
public:
	Battle(shared_ptr<Player> player, shared_ptr<InputClass> ic);
	shared_ptr<Monster> _enemy;
	


	shared_ptr<HWND> _attackButton;
	shared_ptr<HWND> _defenceButton;
	shared_ptr<HWND> _runButton;
	
public:
	void InBattle(shared_ptr<Monster> enemy);


protected:


	shared_ptr<SpriteSheet> sprites;
	shared_ptr<SpriteSheet> backGround;

	shared_ptr<SpriteSheet> player;
	shared_ptr<SpriteSheet> hpbar;
	shared_ptr<SpriteSheet> hpbarbar;
	shared_ptr<Player> _player;
	shared_ptr<InputClass> _ic;
	int frame = 0;
public:
	
	void Load() override;
	void Unload() override;
	void Render(shared_ptr<Graphics> gfx) override;
	void Update() override;
};
// 피카츄
// 1. 플레이어와 몬스터 싸운다는  시점을 가정하고 생긴 클래스

//ex.player hp attack Attack() qkq felid 
//2. 