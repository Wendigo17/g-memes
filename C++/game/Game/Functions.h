#pragma once
#include <iostream>
#include <string>
#include <ctime>
#include <fstream>


void clearscr();
void CreateSave(Player plyr, WorldState worldstate);
void LoadSave(Player &player, WorldState &worldstate);
void SlowClr(int clrtimes);