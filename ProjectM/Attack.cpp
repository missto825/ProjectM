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
	//ĳ���� ����
	virtual void set(string _name, int _attack, int _defense, int _health)
	{
	}
	//���� 
	virtual int attack()
	{
		return 0;
	}
	//���  
	virtual void defense(int _attack_point)
	{
	}
	//ĳ���� ���� ��� 
	virtual void print_info()
	{
	}
protected:
	string name;//ĳ���� �̸� 
	int attack_point;//���ݷ� 
	int defense_point;//���� 
	int health;//ü�� 
};

[���� 2]
class Character : public player
{
public:
	//���� 
	int get_health() { return health; }
};

[���� 3]
int main()
{
	Character my_char;
	Character enemy_char;
	/*
	����
	*/

	cout << endl << "--Battle--" << endl;
	cout << "My Life: " << my_char.get_health() << "\t"
		<< "Enemy Life:" << enemy_char.get_health() << endl;

	while (1)
	{
		/*
		����
		*/
	}
	return 0;
}