#include "pch.h"
#include "ClassSelectScene.h"
#include "PlayerClass.h"
ClassSelectScene::ClassSelectScene(shared_ptr<Player> player,shared_ptr<InputClass> ic)
{
	gamePlayer = player;
	check_input = ic;
}
void ClassSelectScene::ClassSelect()
{
	PlayerClass	ps;
	if (check_input->IsKeyDown(49))
	{
		ps.Choice1(1, gamePlayer);
	}
	if (check_input->IsKeyDown(50))
	{
		ps.Choice1(2, gamePlayer);
	}
	if (check_input->IsKeyDown(51))
	{
		ps.Choice1(3, gamePlayer);
	}
	if (check_input->IsKeyDown(52))
	{
		ps.Choice1(4, gamePlayer);
	}
}
void ClassSelectScene::Load()
{
	sprites = make_shared<SpriteSheet>(L"../Resource/몬스터/초록달팽이.png", gfx, 28, 20);
	backGround = make_shared<SpriteSheet>(L"../Resource/배경/tree.png", gfx, true);
	frame = 0;
}

void ClassSelectScene::Unload()
{
	sprites = 0;
	backGround = 0;
}

void ClassSelectScene::Render(shared_ptr<Graphics> gfx)
{
	backGround->Draw(true);
	sprites->Draw((frame / 10) % 4, 900, 500);
}

void ClassSelectScene::Update()
{
	frame++;
	ClassSelect();
}