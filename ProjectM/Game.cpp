#include "pch.h"
#include "Game.h"
#include "Drawing.h"
#include "Timer.h"
#include "Battle.h"
class Drawing;

void Game::Init(HWND hWnd)
{
	_hWnd = hWnd;
	_draw = make_shared<Drawing>();
	_draw->Init(_hWnd);
	_draw->Draw(L"전저에요", L"iami.bmp", 100, 100, 100, 100);
	GET_SINGLE(Timer)->Init();

	// 캐릭터 선택
	// _player에 집어넣어주는것이 필요하다.
	// 첫 배틀
}

void Game::Update()
{
	GET_SINGLE(Timer)->Update();
	ShowFps(); 
	// Srand Ani
	
	
}
void Game::ShowFps()
{
	uint32 fps = GET_SINGLE(Timer)->GetFps();

	WCHAR text[100] = L"";
	::wsprintf(text, L"FPS : %d", fps);

	::SetWindowText(_hWnd, text);
}