#include <iostream>
#include "Wall.h"
#include "Floor.h"
#include "Player.h"
#include "Goal.h"
#include <vector>
#include <fstream>

using namespace std;


int main()
{
	vector<AWall*> MyWalls;
	vector<APlayer*> MyPlayers;
	vector<AGoal*> MyGoals;
	vector<AFloor*> MyFloors;

	char Data[100];
	ifstream MapFile("Level1.txt");

	int Y = 0;
	while (MapFile.getline(Data, 100))
	{
		for (int X = 0; X < strlen(Data); ++X)
		{
			if (Data[X] == '*')
			{
				MyWalls.push_back(new AWall(X, Y));
			}
			else if (Data[X] == 'P')
			{
				MyPlayers.push_back(new APlayer(X, Y));
			}
			else if (Data[X] == 'G')
			{
				MyGoals.push_back(new AGoal(X, Y));
			}
			else if (Data[X] == ' ')
			{
				MyFloors.push_back(new AFloor(X, Y));
			}

		}
		Y++;
	}

	MapFile.close();
	
	return 0;
}