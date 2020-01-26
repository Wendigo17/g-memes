#pragma once
#include <iostream>
#include <string>
#include <ctime>
#include <fstream>
#include <Windows.h>

class WorldState
{
private:
	int m_worldState = 0;
public:


	WorldState()
	{
		m_worldState = 0;
	}
	~WorldState()
	{

	}
	int GetWorldState()
	{
		return m_worldState;
	}
	void UpWorldState()
	{
		++m_worldState;
	}
	void SetWorldState(int ws)
	{
		m_worldState = ws;
	}
	void PrintWorldState()
	{
		std::cout << "DEBUG the world is currently at state " << m_worldState << "\n";
	}
};
class StorySys
{

public:
	StorySys()
	{

	}
	~StorySys()
	{

	}






};
class Player
{
protected:
	std::string m_name = { "noname" };
	int m_health = 0;
	int m_attack = 0;
	int m_defence = 0;
	int m_coinsHeld = 0;
	bool m_bInBattle{ false }; //Will most likely not be used
	bool m_bInShop{ false }; //Will most likely not be used
public:
	Player()
	{
		m_health = 100;
		m_attack = 15;
		m_defence = 0;
		m_coinsHeld = 17;
		m_bInBattle = { false };
		m_bInShop = { false };
	}
	~Player()
	{


	}

	//////////////////////////////////////////////////////////////////
	std::string GetName()
	{
		return m_name;
	}
	int GetHealth()
	{
		return m_health;
	}
	int GetDefence()
	{
		return m_defence;
	}
	int GetAttack()
	{
		return m_attack;
	}
	int GetCoins()
	{
		return m_coinsHeld;
	}
	bool GetInBattle()
	{
		return m_bInBattle;
	}
	bool GetInShop()
	{
		return m_bInShop;
	}

	/////////////////////////////////////////////////////////
	void SetName(std::string n)
	{
		m_name = n;
	}
	void SetHealth(int h)
	{
		m_health = h;

	}
	void SetDefence(int d)
	{
		m_defence = d;
	}
	void SetAttack(int a)
	{
		m_attack = a;
	}
	void SetCoinsHeld(int c)
	{
		m_coinsHeld = c;
	}
	void SetInBattle(bool b)
	{
		m_bInBattle = b;
	}
	void SetInShop(int s)
	{
		m_bInShop = s;
	}
};

///////////////////////////////////////////////////////////////////////////

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
	Enemy(WorldState worldstate)
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
	~Enemy()
	{

	}

	/////////////////////////////////////////////////////////
	/////////////////////////////////////////////////////////
	/////////////////////////////////////////////////////////

	void ResetEnemy(WorldState worldstate)
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

	int GetHealth()
	{
		return m_health;
	}
	int GetDefence()
	{
		return m_defence;
	}
	int GetAttack()
	{
		return m_attack;
	}
	int GetCoins()
	{
		return m_coinsHeld;
	}

	void PrintEnemyHealth()
	{
		std::cout << "DEBUG enemy health is " << m_health << "\n";
	}

	bool CheckIfDead()
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

	void DamageTest()
	{
		m_health = m_health - 5;
	}
};
class Boss
{
protected:
	int m_health = 0;
	int m_attack = 0;
	int m_defence = 0;
	int m_coinsHeld = 0;
	std::string m_bossType[4]{ "Arraypad", "Slit mouthed woman", "La segua", "Doppelgänger" };
public:
	Boss()
	{

	}
	~Boss()
	{

	}

	//////////////////////////////////////////////////////////////

	int GetHealth()
	{
		return m_health;
	}
	int GetDefence()
	{
		return m_defence;
	}
	int GetAttack()
	{
		return m_attack;
	}
	int GetCoins()
	{
		return m_coinsHeld;
	}
};