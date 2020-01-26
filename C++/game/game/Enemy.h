#pragma once
#include <iostream>
#include <string>
#include <ctime>
#include <fstream>
#include <Windows.h>
#include "WorldState.h"




class Enemy
{
protected:
	int m_health = 0;
	int m_attack = 0;
	int m_defence = 0;
	int m_coinsHeld = 0;
	std::string  m_type[12]{ "Arraypad", "Wraith", "Wendigo", "Skinwalker", "Banshee", "Draugr",
	"Melon head", "Dover demon", "Ghoul", "Nuckelavee", "Banshee", "Aswang" };
public:
	Enemy(WorldState worldstate);
	~Enemy();
	
	/////////////////////////////////////////////////////////
	
	void ResetEnemy(WorldState worldstate);
	int GetHealth();
	int GetDefence();
	int GetAttack();
	int GetCoins();
	void PrintEnemyHealth();
	bool CheckIfDead();
	void DamageTest();
	
};
