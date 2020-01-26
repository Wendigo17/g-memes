#pragma once
#include <iostream>
#include <string>
#include <ctime>
#include <fstream>
#include <Windows.h>
#include "WorldState.h"
#include "Enemy.h"

class Boss
{
protected:
	int m_health = 0;
	int m_attack = 0;
	int m_defence = 0;
	int m_coinsHeld = 0;
	std::string m_bossType[4]{ "Arraypad", "Slit mouthed woman", "La segua", "Doppelgänger" };
public:
	Boss();
	~Boss();


		//////////////////////////////////////////////////////////////

	int GetHealth();
	int GetDefence();
	int GetAttack();
	int GetCoins();
};