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
	int _str=2; //���� ü��
	int _dex=6; //ȸ�� ����
	int _luk=6; //ũ��Ƽ�� �����
	int _int=1; //���� ����

}

void Archer::InArcher()
{
	int _str = 7; //���� ü��
	int _dex = 7; //ȸ�� ����
	int _luk = 3; //ũ��Ƽ�� �����
	int _int = 2; //���� ����

}
void Warrior::Inwarrior()
{
	int _str = 10; //���� ü��
	int _dex = 1; //ȸ�� ����
	int _luk = 2; //ũ��Ƽ�� �����
	int _int = 4; //���� ����
}

void Mage::InMage()
{
	MessageBox(NULL, L"MessageBox �׽�Ʈ �Դϴ�.", L"MessageBox �׽�Ʈ", MB_OK);
	int _str = 3; //���� ü��
	int _dex = 6; //ȸ�� ����
	int _luk = 1; //ũ��Ƽ�� �����
	int _int = 5; //���� ����
	//�ֹ��� ����
}

