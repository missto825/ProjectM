#include "pch.h"
#include "Player.h"

enum ClassType
{
    Knight = 1,
    Archer = 2,
    Mage = 3
}
    void SelectClass(int playerSelect);
    {
        cout << "������ �����ϼ���";
        cout << "[1] ���";
        cout << "[2] �ü�";
        cout << "[3] ����";
        cin >> num;

        switch (num)
        {
        case Knight:
            cout << "��縦 �����Ͽ����ϴ�."<< end;
            knight();
            break;
        case Archer:
            cout << "�ü��� �����Ͽ����ϴ�.."<< end;
            Archer();
            break;
        case Mage:
            cout << "���縦 �����Ͽ����ϴ�."<< end;
            Mage();
            break;
        default:
            cout << "�ٽ� ����." << end;
        }

    };