#include "pch.h"
#include "PlayerClass.h"
#include "Entity.h"
#include "SceneManager.h"
void PlayerClass::Choice1(int PlayerClass1, shared_ptr<Player> player)
{
	switch (PlayerClass1) {
	case 1:
		Inwarrior(player);
		break;
	case 2:
		InMage(player);
		break;
	case 3:
		InArcher(player);
		break;
	case 4:
		InThief(player);
		break;
	}
}
void PlayerClass::InMage(shared_ptr<Player> player)
{
}
void PlayerClass::InThief(shared_ptr<Player> player)
{
}
void PlayerClass::Inwarrior(shared_ptr<Player> player)
{
}
void PlayerClass::InArcher(shared_ptr<Player> player)
{
}
void Thief::InThief(shared_ptr<Player> player)
{
	int _str=2; //공격 체력
	int _dex=6; //회피 공속
	int _luk=6; //크리티컬 드랍율
	int _int=1; //마력 마나
	player->DamageCalcualte();
}

void Archer::InArcher(shared_ptr<Player> player)
{
	int _str = 7; //공격 체력
	int _dex = 7; //회피 공속
	int _luk = 3; //크리티컬 드랍율
	int _int = 2; //마력 마나
	player->DamageCalcualte();

}
void Warrior::Inwarrior(shared_ptr<Player> player)
{
	int _str = 10; //공격 체력
	int _dex = 1; //회피 공속
	int _luk = 2; //크리티컬 드랍율
	int _int = 4; //마력 마나
	player->DamageCalcualte();
}

void Mage::InMage(shared_ptr<Player> player)
{
	MessageBox(NULL, L"MessageBox 테스트 입니다.", L"MessageBox 테스트", MB_OK);
	int _str = 3; //공격 체력
	player->playerStat._str = 3;
	int _dex = 6; //회피 공속
	int _luk = 1; //크리티컬 드랍율
	int _int = 5; //마력 마나
	//주무기 설정
	player->DamageCalcualte();
}

