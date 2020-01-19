#include <iostream>
#include <string>
#include <stdlib.h>
#include <ctime>
#include <fstream>
#include <array>
#include <Windows.h>


/*
Things i want to do maybe probably who knows
Random enemy type/health/attack/carried money
Player health/attack/money/defense(?) also make him a massive chad
shops(?) including weapons armor potions and other things maybe boosts or something
maybe a slight story who knows
amount of kills tracker
way to save progress(?) probably not i couldnt even fathom how i would achieve this honestly
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

public: 
	//I know public member variables is bad but its the best way to do the game switch
	int m_worldState = 0;
	void UpWorldState()
	{
		++m_worldState;
	}
	void PrintWorldState()
	{
		std::cout << m_worldState << "\n";
	}
};

class BaseEntity
{
protected:
	int m_health = 0;
	int m_attack = 0;
	int m_defence = 0;
	int m_coinsHeld = 0;

public:
	//std::rand() % (max - min) + min;
	



};
class Enemy : public BaseEntity, public WorldState
{
protected:
	std::string  m_type[12]{"Arraypad", "Wraith", "Wendigo", "Skinwalker", "Banshee", "Draugr",
	"Melon head", "Dover demon", "Ghoul", "Nuckelavee", "Banshee", "Aswang"};
public:
	
	Enemy()
	{
		int m_health = std::rand() % (max - min) + min;
		int m_attack = std::rand() % (max - min) + min;
		int m_defence = std::rand() % (max - min) + min;
		int m_coinsHeld = std::rand() % (max - min) + min;
	}
	~Enemy()
	{

	}

};

class Enemy2 : public BaseEntity, public WorldState
{
protected:
	std::string  m_type[12]{ "Arraypad", "Wraith", "Wendigo", "Skinwalker", "Banshee", "Draugr",
	"Melon head", "Dover demon", "Ghoul", "Nuckelavee", "Banshee", "Aswang" };
public:

	Enemy2()
	{

	}
	~Enemy2()
	{

	}

};

class Enemy3 : public BaseEntity, public WorldState
{
protected:
	std::string  m_type[12]{ "Arraypad", "Wraith", "Wendigo", "Skinwalker", "Banshee", "Draugr",
	"Melon head", "Dover demon", "Ghoul", "Nuckelavee", "Banshee", "Aswang" };
public:

	Enemy3()
	{

	}
	~Enemy3()
	{

	}

};

class Boss : public Enemy
{
protected:
	std::string m_bossType[4]{ "Arraypad", "Slit mouthed woman", "La segua", "Doppelgänger"};
public:
	Boss()
	{

	}
	~Boss()
	{

	}
};

class Player : public BaseEntity, public WorldState
{
public: 
	Player()
	{
		int m_health = 100;
		int m_attack = 15;
		int m_defence = 0;
		int m_coinsHeld = 17;
	}
	~Player()
	{

	}






};







//figure out how to save things
void CreateSave()
{


	

}
//figure out how to load the save
void LoadSave()
{




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
                                                   Press 1. to start
                                                Press 2. to load a game
                                                   Press 3. to quit
)";
	int startCond{ 0 };
	std::cin >> startCond;
	switch (startCond)
	{
	case 1:
		break;
	case 2:
		break;
	case 3:
		std::cout << "Goodbye :)";
		Sleep(1500);
		EXIT_SUCCESS;
	}
	//Creating the player and worldstate object 
	WorldState worldstate;
	Player player;
	Enemy enemy;


	//Introduction
	while (worldstate.m_worldState == 0)
	{









	}


}
