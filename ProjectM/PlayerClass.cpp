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
	int _str=2; //공격 체력
	int _dex=6; //회피 공속
	int _luk=6; //크리티컬 드랍율
	int _int=1; //마력 마나

}

void Archer::InArcher()
{
	int _str = 7; //공격 체력
	int _dex = 7; //회피 공속
	int _luk = 3; //크리티컬 드랍율
	int _int = 2; //마력 마나

}
void Warrior::Inwarrior()
{
	int _str = 10; //공격 체력
	int _dex = 1; //회피 공속
	int _luk = 2; //크리티컬 드랍율
	int _int = 4; //마력 마나
}

void Mage::InMage()
{
	MessageBox(NULL, L"MessageBox 테스트 입니다.", L"MessageBox 테스트", MB_OK);
	int _str = 3; //공격 체력
	int _dex = 6; //회피 공속
	int _luk = 1; //크리티컬 드랍율
	int _int = 5; //마력 마나
	//주무기 설정
}

