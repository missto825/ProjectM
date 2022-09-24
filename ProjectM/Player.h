#pragma once
#include "Entity.h"

class Player : public Entity
{
public:
	Player();	
	int damage;
	int hp;
	int mp;
	int attack;
	int attackspeed;
	int skill;
	int defence;
	int item;
	int itemvalue;
	int playerdead;

};