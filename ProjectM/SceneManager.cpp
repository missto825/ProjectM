#include "pch.h"
#include "SceneManager.h"
#include "Scene.h"
#include "Monster.h"
shared_ptr<Scene> SceneManager::currentScene;
bool SceneManager::Loading;

void SceneManager::Init()
{
	Loading = true;
}

void SceneManager::LoadInitialScene(shared_ptr<Scene> scene)
{
	Loading = true;
	currentScene = scene;
	currentScene->Load();
	Loading = false;
}

void SceneManager::SwitchScene(shared_ptr<Scene> scene)
{
	Loading = true;
	currentScene->Unload();
	scene->Load();
	currentScene = scene;
	Loading = false;
}

void SceneManager::Render(shared_ptr<Graphics> gfx)
{
	if (Loading) return;
	currentScene->Render(gfx);
}

void SceneManager::Update()
{
	if (Loading) return;
	currentScene->Update();
}

void SceneManager::InBattle(shared_ptr<Monster>)
{
}


