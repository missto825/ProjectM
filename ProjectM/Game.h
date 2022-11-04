#pragma once
#include "Player.h"
#include "Graphics.h"
class Game
{
public:
	// virtual : 가상함수, 부모객체 포인터를 이용해 자식객체의
	// 주소값에 접근할수 있다.
	virtual void Init(HWND hWnd);
	virtual void Update();

	// FPS 표시
	void ShowFps();
	void PlayerSelect(PlayerClass);
	// 플레이어 Get 함수
	shared_ptr<Player> GetPlayer() { return _gamePlayer; };

	//현재 윈도우의 핸들
	HWND _hWnd;
	// 그래픽 처리 클래스
	shared_ptr<Graphics> graphics;
	// 게임의 플레이어
	shared_ptr<Player> _gamePlayer;
};