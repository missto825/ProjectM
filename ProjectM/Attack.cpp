#include "pch.h"
#include "Attack.h"

class player
{
public:
	player() {
		name = "";
		attack_point = 0;
		defense_point = 0;
		health = 0;
	}
	player() {}
	//캐릭터 설정
	virtual void set(string _name, int _attack, int _defense, int _health)
	{
	}
	//공격 
	virtual int attack()
	{
		return 0;
	}
	//방어  
	virtual void defense(int _attack_point)
	{
	}
	//캐릭터 정보 출력 
	virtual void print_info()
	{
	}
protected:
	string name;//캐릭터 이름 
	int attack_point;//공격력 
	int defense_point;//방어력 
	int health;//체력 
};

[참조 2]
class Character : public player
{
public:
	//구현 
	int get_health() { return health; }
};

[참조 3]
int main()
{
	Character my_char;
	Character enemy_char;
	/*
	구현
	*/

	cout << endl << "--Battle--" << endl;
	cout << "My Life: " << my_char.get_health() << "\t"
		<< "Enemy Life:" << enemy_char.get_health() << endl;

	while (1)
	{
		/*
		구현
		*/
	}
	return 0;
}