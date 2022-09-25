#pragma once
class Entity
{
public:
	int damage;
	int defence;
	int attack;
	int attackSpeed;
	int hp;
	int mp;
	//skill;

public:
	virtual void Attack(shared_ptr<Entity> enemy);
	virtual void Defence(shared_ptr<Entity> enemy,int enemySelect);
	void PlayerDead();
public:
	void ItemValue();
};

