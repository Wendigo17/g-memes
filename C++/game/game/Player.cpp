#include <iostream>
#include <string>
#include <ctime>
#include <fstream>
#include <Windows.h>
#include "WorldState.h"
#include "Enemy.h"
#include "Boss.h"
#include "Player.h"




Player::Player()
{
	m_health = 100;
	m_attack = 15;
	m_defence = 0;
	m_coinsHeld = 17;
	m_bInBattle = { false };
	m_bInShop = { false };
}
Player::~Player()
{


}

//////////////////////////////////////////////////////////////////

int Player::GetHealth()
{
	return m_health;
}
int Player::GetDefence()
{
	return m_defence;
}
int Player::GetAttack()
{
	return m_attack;
}
int Player::GetCoins()
{
	return m_coinsHeld;
}
bool Player::GetInBattle()
{
	return m_bInBattle;
}
bool Player::GetInShop()
{
	return m_bInShop;
}

/////////////////////////////////////////////////////////

void Player::SetHealth(int h)
{
	m_health = h;

}
void Player::SetDefence(int d)
{
	m_defence = d;
}
void Player::SetAttack(int a)
{
	m_attack = a;
}
void Player::SetCoinsHeld(int c)
{
	m_coinsHeld = c;
}
void Player::SetInBattle(bool b)
{
	m_bInBattle = b;
}
void Player::SetInShop(int s)
{
	m_bInShop = s;
}
