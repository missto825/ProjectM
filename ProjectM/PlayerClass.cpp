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
	//���� ����

}

void Archer::InArcher()
{
	//���� ����

}
void Warrior::Inwarrior()
{
	//���� ����
}

void Mage::InMage()
{
	//���� ����
	//�ֹ��� ����
}

