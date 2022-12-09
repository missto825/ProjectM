#pragma once
#include "Scene.h"
#include "SpriteSheet.h"
#include "inputclass.h"
#include "Player.h"
#include "SceneManager.h"
#include "Battle.h"
class ClassSelectScene : public Scene
{
public:
	ClassSelectScene(shared_ptr<Player>,shared_ptr<InputClass> ic);

	shared_ptr<Player> gamePlayer;
public:

	void ClassSelect();
public:

	shared_ptr<SpriteSheet> sprites;
	shared_ptr<SpriteSheet> backGround;
	shared_ptr<InputClass> check_input;
	int frame = 0;
private:
	void Load() override;
	void Unload() override;
	void Render(shared_ptr<Graphics> gfx) override;
	void Update() override;
};

