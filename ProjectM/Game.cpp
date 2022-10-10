#include "pch.h"
#include "Game.h"
#include "Drawing.h"
#include "Timer.h"
#include "Battle.h"
#include "PlayerClass.h"
#include "player.h"
#include "Entity.h"
class Drawing;



void Game::Init(HWND hWnd)
{
	_hWnd = hWnd;
	_draw = make_shared<Drawing>();
	_draw->Init(_hWnd);
	_draw->Draw(L"��������", L"iami.bmp", 100, 100, 100, 100);
	GET_SINGLE(Timer)->Init();

	// ĳ���� ����
	// PlayerSelect();
	// _player�� ����־��ִ°��� �ʿ��ϴ�.
	// ù ��Ʋ
	// InitBattle();
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

void Game::PlayerSelect(PlayerClass)
{

	PlayerClass pc;
	Player splayer = {};
	splayer.playerStat. _str;
	splayer.playerStat. _luk;
	splayer.playerStat. _int;
	splayer.playerStat. _dex;


	splayer.playerClass = WARRIOR;
	splayer.playerClass = MAGE;
	splayer.playerClass = ACHER;
	splayer.playerClass = THIEF;

	int select;
	pc.Choice1(select);
	//��ó�� ������ �׿� �´� ������ �־��
//Setplayer(&tPlayer);


	//����ɋ� ĳ���Ͱ�(����)�� ��������
	//
	//CreatePlayer(choice, player);
	//playclass




}


