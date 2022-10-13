#include <iostream>
#include "Wall.h"
#include "Floor.h"
#include "Player.h"
#include "Goal.h"

using namespace std;

int main()
{
#ifdef _DEBUG
	AWall* MyWall = new AWall();
	AFloor* MyFloor = new AFloor();
	APlayer* MyPlayer = new APlayer();
	AGoal* MyGoal = new AGoal();

	MyPlayer->X = 10;
	MyPlayer->Y = 10;

	MyWall->Draw();
	MyFloor->Draw();
	MyPlayer->Draw();
	MyGoal->Draw();

	delete MyGoal;
	delete MyPlayer;
	delete MyFloor;
	delete MyWall;
#endif



	return 0;
}