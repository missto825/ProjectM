#include "pch.h"
#include "Game.h"
#include "Drawing.h"
#include "Timer.h"
class Drawing;

void Game::Init()
{
	_draw = make_shared<Drawing>();
	_draw->Init(_hWnd);
	GET_SINGLE(Timer)->Init();
}

void Game::Update()
{
	GET_SINGLE(Timer)->Update();
	ShowFps();
}
void Game::ShowFps()
{
	uint32 fps = GET_SINGLE(Timer)->GetFps();

	WCHAR text[100] = L"";
	::wsprintf(text, L"FPS : %d", fps);

	::SetWindowText(_hWnd, text);
}