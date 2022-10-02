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
	_draw->Draw(L"��������", L"iami.bmp", 100, 100, 100, 100);
	GET_SINGLE(Timer)->Init();

	// ĳ���� ����
	// _player�� ����־��ִ°��� �ʿ��ϴ�.
	// ù ��Ʋ
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