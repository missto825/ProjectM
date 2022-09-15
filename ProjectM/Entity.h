#pragma once
class Entity
{
public:
	int damage;
	int defence;
	int attack;
	int attackSpeed;
	int skill;
	int hp;
	int mp;

public:
	void ItemValue();
	void PlayerDead();
};

