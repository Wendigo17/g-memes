#pragma once
#include <iostream>
#include <string>
#include <ctime>
#include <fstream>
#include <Windows.h>
#include "WorldState.h"
#include "Enemy.h"



class Player
{
protected:
	int m_health = 0;
	int m_attack = 0;
	int m_defence = 0;
	int m_coinsHeld = 0;
	bool m_bInBattle{ false }; //Will most likely not be used
	bool m_bInShop{ false }; //Will most likely not be used
public:


	Player();
	~Player();

	//////////////////////////////////////////////////////////////////

	int GetHealth();
	int GetDefence();
	int GetAttack();
	int GetCoins();
	bool GetInBattle();
	bool GetInShop();
	

	/////////////////////////////////////////////////////////

	void SetHealth(int h);	
	void SetDefence(int d);
	void SetAttack(int a);
	void SetCoinsHeld(int c);
	void SetInBattle(bool b);
	void SetInShop(int s);


};
