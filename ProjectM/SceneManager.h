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
// ���� �ٲٰ�, ���� �߰��� ������Ʈ���� ������ �־���Ѵ�.
// ������Ʈ ���� : ��ư, 

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

