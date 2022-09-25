#include "pch.h"
#include "Entity.h"

void Entity::Attack(shared_ptr<Entity> enemy)
{
    enemy->hp -= 10;
}

void Entity::Defence(shared_ptr<Entity> enemy, int enemySelect)
{
    int a = enemy->attack - defence;
}
