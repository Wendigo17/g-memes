#include <iostream>
#include <string>
#include <ctime>
#include <fstream>
#include <Windows.h>
#include "Classes.h"
#include "Functions.h"

/*
Things i want to do maybe probably who knows

Random enemy type/health/attack/carried money || FINISHED :)

Player health/attack/money/defense(?) also make him a massive chad || FINISHED :)

shops(?) including weapons armor potions and other things maybe boosts or something

maybe a slight story who knows

amount of kills tracker

way to save progress(?) probably not i couldnt even fathom how i would achieve this honestly || FINISHED :)

try to prevent people from breaking the game but i doubt ill do that

events(?)

move everything into seperate files i tried this before but ran into a lot of issues i wasnt sure how to fix || FINISHED :)
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
	//rand() % (max - min) + min;

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
	SlowClr(12);
	MoveWindow(console, r.left, r.top, 650, 600, TRUE);

	if (worldstate.GetWorldState() == 0)
	{
		std::cout << "Your fate is sealed.";
		Sleep(800);
		std::cout << ".";
		Sleep(800);
		std::cout << ". \n";
		Sleep(2000);
		std::cout << "You have a horrible night full of nightmares \n";
		Sleep(2000);
		std::cout << "Nightmares of the worlds worst mythical creatures becoming reality\n";
		Sleep(2000);
		std::cout << "You awake with an impossibly bad headache \n";



	}

	
}

