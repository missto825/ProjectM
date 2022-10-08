#include "pch.h"
#include "PlayerClass.h"
#include "Entity.h"
void PlayerClass::Choice1(int PlayerClass1)
{
	switch (classNum) {
	case WARRIOR:
		Inwarrior();
		break;
	case MAGE:
		InMage();
		break;
	case ACHER:
		InArcher();
		break;
	case THIEF:
		InThief();
		break;
	}
}
void Thief::InThief()
{
	//스탯 설정

}

void Archer::InArcher()
{
	//스탯 설정

}
void Warrior::Inwarrior()
{
	//스탯 설정
}

void Mage::InMage()
{
	//스탯 설정
	//주무기 설정
}

