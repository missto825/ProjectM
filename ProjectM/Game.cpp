#include "pch.h"
#include "Game.h"
#include "Drawing.h"
#include "Timer.h"
#include "Battle.h"
#include "PlayerClass.h"
#include "player.h"
#include "Entity.h"
#include "SceneManager.h"
class Drawing;



void Game::Init(HWND hWnd)
{
	CoInitialize(NULL);
	_hWnd = hWnd;

	GET_SINGLE(Timer)->Init();
	_gamePlayer = make_shared<Player>();

	graphics = make_shared<Graphics>();
	Scene::Init(graphics);
	SceneManager::Init();
	graphics->Init(hWnd);
	graphics->ClearScreen(1.0f, 1.0f, 1.0f);
	SceneManager::LoadInitialScene(make_shared<Battle>());
	shared_ptr<Monster> snail = make_shared<Monster>(2,6,6,1);
	shared_ptr<Battle> battle = make_shared<Battle>();
	battle->InBattle(snail);
	// 씬 매니저를 이용한 배틀 진입
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

void Game::PlayerSelect(int select,shared_ptr<Player> _gamePlayer)
{
	PlayerClass pc;
	pc.Choice1(select,_gamePlayer);
}


