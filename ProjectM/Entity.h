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

	//current
	int currentHp;
	int currentMp;

	//skill;

public:
	virtual void GetAttack()
	{
		
	}


	virtual void Attack(shared_ptr<Entity> enemy);
	virtual void Defence(shared_ptr<Entity> enemy,int enemySelect);
	void PlayerDead();
public:
	void ItemValue();
};

