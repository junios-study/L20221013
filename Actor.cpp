#include "Actor.h"
#include <iostream>
#include <Windows.h>

using namespace std;

AActor::AActor() :
	X(1), Y(1), Shape(' ')
{
	//X = 1;
	//Y = 1;
	//Shape = ' ';
}

AActor::~AActor()
{
}

void AActor::Draw()
{
	COORD Currrent;
	Currrent.X = X;
	Currrent.Y = Y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Currrent);

	cout << Shape;
}
