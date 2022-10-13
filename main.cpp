#include <iostream>
#include "Wall.h"
#include "Floor.h"
#include "Player.h"
#include "Goal.h"
#include <vector>
#include <fstream>

using namespace std;

class Parent
{
public:
	Parent() { cout << "Parent Construct" << endl; }
	virtual ~Parent(){ cout << "Parent Desturct" << endl; }

	virtual void Do()
	{
		cout << "Parent Do()" << endl;
	}
};

class Child1 : public Parent
{
public:
	Child1() { cout << "Child1 Construct" << endl; }
	~Child1() { cout << "Child1 Desturct" << endl; }

	virtual void Do() override
	{
		cout << "Child1 Do()" << endl;
		Parent::Do();
	}

	void Special()
	{
		cout << "Child1 Special()" << endl;
	}
};

class Child2 : public Parent
{
public:
	Child2() { cout << "Child2 Construct" << endl; }
	~Child2() { cout << "Child2 Desturct" << endl; }

	void Do() 
	{
		cout << "Child2 Do()" << endl;
	}
};

int main()
{
	vector<Parent*> Data;

	Data.push_back(new Parent);
	Data.push_back(new Child1);
	Data.push_back(new Child2);

	if (dynamic_cast<Child1*>(Data[2]))
	{
		dynamic_cast<Child1*>(Data[2])->Special();
	}

	
 ////	dynamic_cast<Child1*>(Data[1])->Do();
	////dynamic_cast<Child2*>(Data[2])->Do();

	//delete Data[0];



	return 0;
}




//int main()
//{
//	vector<AActor*> MyActors;
//
//	//Engine
//	//Load
//	char Data[100];
//	ifstream MapFile("Level1.txt");
//
//	//[*][*][*][*][*][*][*][*][*][*][][][][][][][][
//	int Y = 0;
//	while (MapFile.getline(Data, 100))
//	{
//		for (int X = 0; X < strlen(Data); ++X)
//		{
//			if (Data[X] == '*')
//			{
//				MyActors.push_back(new AWall(X, Y));
//			}
//			else if (Data[X] == 'P')
//			{
//				MyActors.push_back(new APlayer(X, Y));
//			}
//			else if (Data[X] == 'G')
//			{
//				MyActors.push_back(new AGoal(X, Y));
//			}
//			else if (Data[X] == ' ')
//			{
//				MyActors.push_back(new AFloor(X, Y));
//			}
//
//		}
//		Y++;
//	}
//	MapFile.close();
//
//
//	//Draw
//	for (int i = 0; i < MyActors.size(); ++i)
//	{
//		APlayer* Player = dynamic_cast<APlayer*>(MyActors[i]);
//		if (Player)
//		{
//			Player->Input();
//		}
//		else
//		{
//			MyActors[i]->Draw();
//		}
//	}
//	
//	return 0;
//}