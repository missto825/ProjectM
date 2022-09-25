#include "pch.h"
#include "Entity.h"

void Entity::Attack(shared_ptr<Entity> enemy)
{
	double damage = (attack * 100) / (enemy->defence + 100);

}

void Entity::Defence(shared_ptr<Entity> enemy, int enemySelect)
{
	printf("%d", a);
}
