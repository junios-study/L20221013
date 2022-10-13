#include <iostream>
#include "Wall.h"
#include "Floor.h"
#include "Player.h"
#include "Goal.h"
#include <vector>

using namespace std;

/*
**********
*P       * 
*        * 
*        *
*        *
*        *
*        *
*        *
*        *
*       G* 
**********
*/
int main()
{
	vector<AWall*> MyWalls;
	MyWalls.push_back(new AWall(0, 0));
	MyWalls.push_back(new AWall(1, 0));
	MyWalls.push_back(new AWall(2, 0));

	for (auto Value : MyWalls)
	{
		Value->Draw();
	}

	for (auto Value : MyWalls)
	{
		delete Value;
	}
	MyWalls.clear();


	return 0;
}