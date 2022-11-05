#pragma once
#include "pch.h"
#include "Player.h"
class PlayerClass
{
public:
	int classNum;
	//주무기 변수 제작


	//수호
	void Choice1(int PlayerClass1, shared_ptr<Player> player);
	virtual void InMage(shared_ptr<Player> player);
	virtual void InThief(shared_ptr<Player> player);
	virtual void Inwarrior(shared_ptr<Player> player);
	virtual void InArcher(shared_ptr<Player> player);
};


class Mage :public PlayerClass
{
public:
	int _wand;
public:
	void InMage(shared_ptr<Player> player) override;
};

class Thief :public PlayerClass
{
public:
	int _shortsword;
public:
	void InThief(shared_ptr<Player> player) override;
};


class Warrior :public PlayerClass
{
public:
	int _sword;


public:
	void Inwarrior(shared_ptr<Player> player) override;
};

class Archer :public PlayerClass
{
public:
	int _bow;
public:
	void InArcher(shared_ptr<Player> player) override;
};

