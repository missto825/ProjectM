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
        cout << "직업을 선택하세요";
        cout << "[1] 기사";
        cout << "[2] 궁수";
        cout << "[3] 법사";
        cin >> num;

        switch (num)
        {
        case Knight:
            cout << "기사를 선택하였습니다."<< end;
            knight();
            break;
        case Archer:
            cout << "궁수를 선택하였습니다.."<< end;
            Archer();
            break;
        case Mage:
            cout << "법사를 선택하였습니다."<< end;
            Mage();
            break;
        default:
            cout << "다시 선택." << end;
        }

    };