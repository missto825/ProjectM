#pragma once
#define DAMAGE ()
struct Stat
{
	int _str; //공격 체력
	int _dex; //회피 공속
	int _luk; //크리티컬 드랍율
	int _int; //마력 마나
};



class Entity
{
public:
	int _damage; 
	float _defence;
	float _attack;
	float _attackSpeed;
	float _dropRate;
	float _dodgeRate;
	float _critRate;
	float _critDamage;
	float _skillDamage;

	int _hp;
	int _mp;
	Stat _Stat;

	//current
	int currentHp;
	int currentMp;

	//skill;

public:
	virtual void StatCalculate();


	virtual void Attack(shared_ptr<Entity> enemy);
	virtual void Defence(shared_ptr<Entity> enemy,int enemySelect);
	virtual int DamageCalcualte();
	

	void PlayerDead();
public:
	void ItemValue();
};

