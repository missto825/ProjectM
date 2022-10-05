#pragma once
#include "pch.h"
class PlayerClass
{
public:
	int classNum;
	int mainStat;
	

};


class Wizard :public PlayerClass
{
public:
	int _wand;
public:
	void InWizard();
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

