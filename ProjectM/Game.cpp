#include "pch.h"
#include "Game.h"
#include "Drawing.h"
#include "Timer.h"
#include "Battle.h"
#include "PlayerClass.h"
#include "SceneManager.h"
class Drawing;


void Game::Init(HWND hWnd)
{
	CoInitialize(NULL);
	_hWnd = hWnd;

	//_draw = make_shared<Drawing>();
	//_draw->Init(_hWnd);
	//_draw->Draw(L"전저에요", L"iami.bmp", 100, 100, 100, 100);
	GET_SINGLE(Timer)->Init();

	graphics = make_shared<Graphics>();
	Scene::Init(graphics);
	SceneManager::Init();
	graphics->Init(hWnd);
	SceneManager::LoadInitialScene(make_shared<Battle>());

	// 캐릭터 선택
	// PlayerSelect();
	// _player에 집어넣어주는것이 필요하다.
	// 첫 배틀
	// InitBattle();
}
void Game::Update()
{
	GET_SINGLE(Timer)->Update();
	ShowFps(); 
	// Srand Ani
	SceneManager::Update();


	//Render
	graphics->BeginDraw();
	SceneManager::Render(graphics);
	graphics->EndDraw();
	
}
void Game::ShowFps()
{
	uint32 fps = GET_SINGLE(Timer)->GetFps();

	WCHAR text[100] = L"";
	::wsprintf(text, L"FPS : %d", fps);

	::SetWindowText(_hWnd, text);
}


