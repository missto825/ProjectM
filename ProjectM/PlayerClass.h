#pragma once
#include "pch.h"
class PlayerClass
{
public:
	int classNum;
	//주무기 변수 제작


	//수호
	void Choice1(int PlayerClass1);
	virtual void InMage();
	virtual void InThief();
	virtual void Inwarrior();
	virtual void InArcher();
};


class Mage :public PlayerClass
{
public: 
	int _wand;
public:
	void InMage();
};


class Thief
{
public:
	int _shortsword;
public:
	void InThief();
};


class Warrior
{
public:
	int _sword;


public:
	void Inwarrior();
};

class Archer
{
public:
	int _bow;
public:
	void InArcher();
};

