#pragma once



class WorldState
{
private:
	int m_worldState = 0;
public:


	WorldState();
	~WorldState();

	////////////////////////////////////////////////

	int GetWorldState();
	void UpWorldState();
	void SetWorldState(int ws);
	void PrintWorldState();

};

