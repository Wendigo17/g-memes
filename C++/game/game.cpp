#include <iostream>
#include <string>
#include <stdlib.h>
#include <ctime>
#include <fstream>
#include <array>
#include <Windows.h>


/*
Things i want to do maybe probably who knows
Random enemy type/health/attack/carried money FINISHED :)

Player health/attack/money/defense(?) also make him a massive chad FINISHED :)

shops(?) including weapons armor potions and other things maybe boosts or something

maybe a slight story who knows

amount of kills tracker

way to save progress(?) probably not i couldnt even fathom how i would achieve this honestly FINISHED :)

try to prevent people from breaking the game but i doubt ill do that

events(?)
*/
/*Writing this as i completely redo the classes because i have a fucking massive brain :(
I should probably diagram things in a more technical way next time so i dont hit roadblocks
*/

enum colors
{
	Blue = 1,
	Green,
	Cyan,
	Red,
	Purple,
	Yellow,
	White,
	Gray,
	Brightblue,
	Brigthgreen,
	Brightcyan,
	Brightred,
	Pink,
	BrightYellow,
	Brightwhite,
	//SetConsoleTextAttribute(handle, color);
};


class WorldState
{
private: 
	int m_worldState = 0;
public:
	

	WorldState()
	{
		m_worldState = 0;
	}
	WorldState(int worldstate)
	{
		m_worldState = worldstate;
	}
	~WorldState()
	{

	}

	////////////////////////////////////////////////

	int GetWorldState()
	{
		return m_worldState;
	}

	void UpWorldState()
	{
		++m_worldState;
	}

	int SetWorldState(int ws)
	{
		return m_worldState = ws;
	}

	void PrintWorldState()
	{
		std::cout << "DEBUG the world is currently at state " << m_worldState << "\n";
	}


};


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


	Player()
	{
		m_health = 100;
		m_attack = 15;
		m_defence = 0;
		m_coinsHeld = 17;
		m_bInBattle = { false };
		m_bInShop = { false };
	}
	//LoadConstructor
	Player(int health, int attack, int defence, int coins, bool inbat, bool inshop)
	{
		m_health = health;
		m_attack = attack;
		m_defence = defence;
		m_coinsHeld = coins;
		m_bInBattle = inbat;
		m_bInShop = inshop;
	}
	~Player()
	{
		
	}

	//////////////////////////////////////////////////////////////////

	//Getters
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

	//Setters
	int SetHealth(int h)
	{
		m_health = h;
		return 0;
	}
	int SetDefence(int d)
	{
		return m_defence = d;
	}
	int SetAttack(int a)
	{
		return m_attack = a;
	}
	int SetCoinsHeld(int c)
	{
		return m_coinsHeld = c;
	}
	bool SetInBattle(bool b)
	{
		return m_bInBattle = b;
	}
	bool SetInShop(int s)
	{
		m_bInShop = s;
		return 0;
	}
	
};

void clearscr()
{
	std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
}

//figure out how to save things
void CreateSave(Player plyr, WorldState worldstate)
{
	std::ofstream save("./save/save.txt");
	
	save << worldstate.GetWorldState() << "\n";
	save << plyr.GetHealth() << "\n";
	save << plyr.GetAttack() << "\n";
	save << plyr.GetDefence() << "\n";
	save << plyr.GetCoins() << "\n";
	save << plyr.GetInBattle() << "\n";
	save << plyr.GetInShop() << "\n";
	//Set up the shop and save the shop state later
	save.close();
}
//figure out how to load the save
void LoadSave(Player &player, WorldState &worldstate)
{
	std::ifstream save("./save/save.txt");

	int nworldstate;
	int health;
	int attack;
	int defence;
	int coinsHeld;
	bool bInBattle; 
	bool bInShop;


	save >> nworldstate >> health >> attack >> defence >> coinsHeld >> bInBattle >> bInShop;

	
	worldstate.SetWorldState(nworldstate);
	player.SetHealth(health);
	player.SetAttack(attack);
	player.SetDefence(defence);
	player.SetCoinsHeld(coinsHeld);
	player.SetInBattle(bInBattle);
	player.SetInShop(bInShop);
	save.close();
}




int main()
{
	//Getting console handle for resizing/coloring etc.
	HANDLE  hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	HWND console = GetConsoleWindow();
	RECT r;
	GetWindowRect(console, &r);
	//120 character width
	MoveWindow(console, r.left, r.top, 1000, 600, TRUE);

	//Random number generator seed
	std::srand(static_cast<unsigned int>(time(NULL)));

	/*
	Pre start:
	Introduction
	Check for save when implemented
	*/
	SetConsoleTextAttribute(hConsole, Green);
	std::cout << R"(
                                       .--.   ,-.      ,---.   ,---.    ,-.   .--.   
                                      / /\ \  | |      | .-'   | .-.\   |(|  / /\ \  
                                     / /__\ \ | |      | `-.   | `-'/   (_) / /__\ \ 
                                     |  __  | | |      | .-'   |   (    | | |  __  | 
                                     | |  |)| | `--.   |  `--. | |\ \   | | | |  |)| 
                                     |_|  (_) |( __.'  /( __.' |_| \)\  `-' |_|  (_) 
                                              (_)     (__)         (__)             
 
				 )";
	SetConsoleTextAttribute(hConsole, White);
	std::cout << R"(       
                                     Important note i am not properly checking input
                                          Make sure you press the right thing
                                              Press 1. to start a new game
                                                Press 2. to load a save
                                                   Press 3. to quit
				 )";
	int startCond{ 0 };
	std::cin >> startCond;

	WorldState worldstate;
	Player player;

	switch (startCond)
	{
	case 1:
	{
		break;
	}
	case 2:
	{
		LoadSave(player, worldstate);
		std::cout << "loading save \n";
		break;
	}
	default:
	{
		std::cout << "Goodbye :)";
		Sleep(1500);
		EXIT_SUCCESS;
	}
	}


	//Introduction
	clearscr();
	MoveWindow(console, r.left, r.top, 600, 600, TRUE);






	if (worldstate.GetWorldState() == 0)
	{
		std::cout << "You seem to have befallen a terrible fate and awoke in a weird place\n";
		std::cout << "Theres someone standing over in the corner of your room they seem quite tall\n";





	}

	
}



