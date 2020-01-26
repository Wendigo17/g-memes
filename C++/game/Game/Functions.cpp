#include <iostream>
#include <string>
#include <ctime>
#include <fstream>
#include <Windows.h>
#include "Classes.h"
#include "Functions.h"


void clearscr()
{
	std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
}
void SlowClr(int clrtimes)
{
	for (int i = clrtimes; i > 0; i--)
	{
		std::cout << "\n\n\n";
		Sleep(400);
	}
}
void CreateSave(Player plyr, WorldState worldstate)
{
	std::ofstream save("./save/save.txt");

	save << worldstate.GetWorldState() << "\n";
	save << plyr.GetName() << "\n";
	save << plyr.GetHealth() << "\n";
	save << plyr.GetAttack() << "\n";
	save << plyr.GetDefence() << "\n";
	save << plyr.GetCoins() << "\n";
	save << plyr.GetInBattle() << "\n";
	save << plyr.GetInShop() << "\n";
	//Set up the shop and save the shop state later
	save.close();
}

void LoadSave(Player &player, WorldState &worldstate)
{
	std::ifstream save("./save/save.txt");

	int nworldstate;
	std::string playname;
	int health;
	int attack;
	int defence;
	int coinsHeld;
	bool bInBattle;
	bool bInShop;
	save >> nworldstate >> playname >> health >> attack >> defence >> coinsHeld >> bInBattle >> bInShop;
	worldstate.SetWorldState(nworldstate);
	player.SetName(playname);
	player.SetHealth(health);
	player.SetAttack(attack);
	player.SetDefence(defence);
	player.SetCoinsHeld(coinsHeld);
	player.SetInBattle(bInBattle);
	player.SetInShop(bInShop);
	save.close();
}