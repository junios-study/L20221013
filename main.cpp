#include <iostream>
#include <fstream>
#include "World.h"


#include "Engine.h"

using namespace std;


class MyEngine : public Engine
{
public:
	MyEngine() {}
	virtual ~MyEngine() {}


	virtual void Initialize() override
	{
		Load("Level1.txt");
	}

	virtual void Terminalize() override
	{
	}

};


int main()
{
	MyEngine* E = new MyEngine();

	E->Initialize();

	E->Run();

	E->Terminalize();

	
	return 0;
}