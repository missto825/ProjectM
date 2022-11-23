#pragma once
#include "Graphics.h"
#include "Scene.h"
#include "SpriteSheet.h"
#include "Monster.h"
enum SceneList
{
	battle,
	field,
	village
};
// 씬을 바꾸고, 씬에 추가될 오브젝트들을 가지고 있어야한다.
// 오브젝트 종류 : 버튼, 

class SceneManager
{
	SceneManager() { }
public:
	static shared_ptr<Scene> currentScene;
	
public:
	static bool Loading;

	static void Init();

	static void LoadInitialScene(shared_ptr<Scene> scene);
	static void SwitchScene(shared_ptr<Scene> scene);

	static void Render(shared_ptr<Graphics> gfx);
	static void Update();

public:
	static void InBattle(shared_ptr<Monster>);
};

