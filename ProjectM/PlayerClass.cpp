#include "pch.h"
#include "PlayerClass.h"
#include "Entity.h"
void PlayerClass::Choice1(int PlayerClass1, shared_ptr<Player> player)
{
	switch (classNum) {
	case WARRIOR:
		Inwarrior(player);
		break;
	case MAGE:
		InMage(player);
		break;
	case ACHER:
		InArcher(player);
		break;
	case THIEF:
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

}

void Archer::InArcher(shared_ptr<Player> player)
{
	int _str = 7; //���� ü��
	int _dex = 7; //ȸ�� ����
	int _luk = 3; //ũ��Ƽ�� �����
	int _int = 2; //���� ����

}
void Warrior::Inwarrior(shared_ptr<Player> player)
{
	int _str = 10; //���� ü��
	int _dex = 1; //ȸ�� ����
	int _luk = 2; //ũ��Ƽ�� �����
	int _int = 4; //���� ����
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
}

