#include "pch.h"
#include "Entity.h"

void Entity::StatCalculate()
{
	//
	//디펜스는 아이템 디펜스
	_attack = (float)_Stat._str * 1.15;
	_hp = (int)_Stat._str * 5;
	_attackSpeed = (float)_Stat._dex * 1.15;
	_dropRate = (float)_Stat._luk * 0.15;
	_dodgeRate = (float)_Stat._dex * 0.15;
	_critRate = (float)_Stat._luk * 2.25;
	_critDamage = (float)_Stat._luk * 1.5;
	
}

void Entity::Attack(shared_ptr<Entity> enemy)
{
	double damage = (_attack * 100) / (enemy->_defence + 100);

}

void Entity::Defence(shared_ptr<Entity> enemy, int enemySelect)
{
	// 선택이 공격였다면 데미지 감소식 or 반격
	// 선택이 방어었다면 아무일도 일어나지 않고 리턴
}

int  Entity::DamageCalcualte()
{
	bool isCritical;

	if (isCritical)
	{
		(rand() % 100) < _critRate;
		
	}
	_attack
}
