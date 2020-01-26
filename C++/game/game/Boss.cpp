#include <iostream>
#include <string>
#include <ctime>
#include <fstream>
#include <Windows.h>
#include "WorldState.h"
#include "Enemy.h"
#include "Boss.h"




Boss::Boss()
{

}
Boss::~Boss()
{

}

//////////////////////////////////////////////////////////////

int Boss::GetHealth()
{
	return m_health;
}
int Boss::GetDefence()
{
	return m_defence;
}
int Boss::GetAttack()
{
	return m_attack;
}
int Boss::GetCoins()
{
	return m_coinsHeld;
}

