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
	int _str=2; //���� ü��
	int _dex=6; //ȸ�� ����
	int _luk=6; //ũ��Ƽ�� �����
	int _int=1; //���� ����
	player->DamageCalcualte();
}

void Archer::InArcher(shared_ptr<Player> player)
{
	int _str = 7; //���� ü��
	int _dex = 7; //ȸ�� ����
	int _luk = 3; //ũ��Ƽ�� �����
	int _int = 2; //���� ����
	player->DamageCalcualte();

}
void Warrior::Inwarrior(shared_ptr<Player> player)
{
	int _str = 10; //���� ü��
	int _dex = 1; //ȸ�� ����
	int _luk = 2; //ũ��Ƽ�� �����
	int _int = 4; //���� ����
	player->DamageCalcualte();
}

void Mage::InMage(shared_ptr<Player> player)
{
	MessageBox(NULL, L"MessageBox �׽�Ʈ �Դϴ�.", L"MessageBox �׽�Ʈ", MB_OK);
	int _str = 3; //���� ü��
	player->playerStat._str = 3;
	int _dex = 6; //ȸ�� ����
	int _luk = 1; //ũ��Ƽ�� �����
	int _int = 5; //���� ����
	//�ֹ��� ����
	player->DamageCalcualte();
}

