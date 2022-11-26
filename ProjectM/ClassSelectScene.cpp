#include "pch.h"
#include "ClassSelectScene.h"
#include "PlayerClass.h"
ClassSelectScene::ClassSelectScene(shared_ptr<Player> player)
{
	gamePlayer = player;
}
void ClassSelectScene::ClassSelect(int selectNum)
{
	PlayerClass	ps;
	ps.Choice1(selectNum,gamePlayer);
	SceneManager::SwitchScene(make_shared<Battle>());
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
	check_input->IsKeyDown(1);
}