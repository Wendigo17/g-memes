#include <iostream>
#include <string>
#include <ctime>
#include <fstream>
#include <Windows.h>
#include "WorldState.h"



WorldState::WorldState()
{
	m_worldState = 0;
}
WorldState::~WorldState()
{

}
int WorldState::GetWorldState()
{
	return m_worldState;
}
void WorldState::UpWorldState()
{
	++m_worldState;
}
void WorldState::SetWorldState(int ws)
{
	m_worldState = ws;
}
void WorldState::PrintWorldState()
{
	std::cout << "DEBUG the world is currently at state " << m_worldState << "\n";
}