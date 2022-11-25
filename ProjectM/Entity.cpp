#include "pch.h"
#include "Entity.h"

void Entity::StatCalculate()
{
	//
	//���潺�� ������ ���潺
	_attack = (float)_Stat._str * 2 + _Stat._dex * 0.5 + _Stat._luk * 0.5;
	_hp = (int)_Stat._str * 10;
	_attackSpeed = (float)_Stat._dex * 0.05;
	_dropRate = (float)_Stat._luk * 0.1;
	_dodgeRate = (float)_Stat._dex * 0.1;
	_critRate = (float)_Stat._luk * 0.7;
	_critDamage = (float)_Stat._luk * 0.2;
	_skillDamage = (float)_Stat._int * 1;
	_mp = (float)_Stat._int * 7; 
	
}

void Entity::Attack(shared_ptr<Entity> enemy, int enemySelect)
{
	double damage = (_attack * 100) / (enemy->_defence + 100);
	enemy->currentHp -= damage ;
}

	

void Entity::Defence(shared_ptr<Entity> enemy, int enemySelect)
{

	// ������ ���ݿ��ٸ� ������ ���ҽ� or �ݰ�
	// ������ �����ٸ� �ƹ��ϵ� �Ͼ�� �ʰ� ����
	
	switch (enemySelect) {
	case ATTACK:
		//enemy->currentHp-=
		//enemy->_defence;
		//_player->currenHP
			if ((rand() % 100) <= 20)
			{
				enemy->currentHp -= (_damage * 0.8)-enemy->_defence;;
			
				return;				
				
			}
			if (enemy->_attack >= this->_defence)
			{
				if (enemy->_attack / 2 >= this->_defence)
					this->currentHp -= (enemy->_attack - this->_defence);
				else
					this->currentHp -= (enemy->_attack / 2);

			}
			else
			{
				this->currentHp -= 1;
			}
		
	case DEFENCE:
		return;
	}
}

int  Entity::DamageCalcualte()
{

	if ((rand() % 100) < _critRate)
	{
		return _critDamage;
		
	}
	return 0;
}
