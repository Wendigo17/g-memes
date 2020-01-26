#include "Enemy.h"
#include "WorldState.h"





Enemy::Enemy(WorldState worldstate)
{
	if (worldstate.GetWorldState() == 1)
	{
		m_health = 1;
		m_attack = 0;
		m_defence = 0;
		m_coinsHeld = 0;
		//std::cout << "WorldState 1 constructor called\n";
	}
	if (worldstate.GetWorldState() == 2)
	{
		m_health = 2;
		m_attack = 0;
		m_defence = 0;
		m_coinsHeld = 0;
		//std::cout << "WorldState 2 constructor called\n";
	}
	if (worldstate.GetWorldState() == 3)
	{
		m_health = 3;
		m_attack = 0;
		m_defence = 0;
		m_coinsHeld = 0;
		//std::cout << "WorldState 3 constructor called\n";
	}
	if (worldstate.GetWorldState() == 4)
	{
		m_health = 4;
		m_attack = 0;
		m_defence = 0;
		m_coinsHeld = 0;
		//std::cout << "WorldState 4 constructor called\n";
	}
}
Enemy::~Enemy()
{

}

/////////////////////////////////////////////////////////

void Enemy::ResetEnemy(WorldState worldstate)
{
	if (worldstate.GetWorldState() == 1)
	{
		m_health = 1;
		m_attack = 0;
		m_defence = 0;
		m_coinsHeld = 0;

	}
	if (worldstate.GetWorldState() == 2)
	{
		m_health = 2;
		m_attack = 0;
		m_defence = 0;
		m_coinsHeld = 0;

	}
	if (worldstate.GetWorldState() == 3)
	{
		m_health = 3;
		m_attack = 0;
		m_defence = 0;
		m_coinsHeld = 0;

	}
	if (worldstate.GetWorldState() == 4)
	{
		m_health = 4;
		m_attack = 0;
		m_defence = 0;
		m_coinsHeld = 0;
	}
}

int Enemy::GetHealth()
{
	return m_health;
}
int Enemy::GetDefence()
{
	return m_defence;
}
int Enemy::GetAttack()
{
	return m_attack;
}
int Enemy::GetCoins()
{
	return m_coinsHeld;
}

void Enemy::PrintEnemyHealth()
{
	std::cout << "DEBUG enemy health is " << m_health << "\n";
}

bool Enemy::CheckIfDead()
{
	if (m_health <= 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void Enemy::DamageTest()
{
	m_health = m_health - 5;
}

