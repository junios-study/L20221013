#include "Player.h"
#include <iostream>
#include "Engine.h"

using namespace std;

APlayer::APlayer()
{
	Shape = 'P';
	ZOrder = 40;
}

APlayer::APlayer(int NewX, int NewY)
	: APlayer()
{
	X = NewX;
	Y = NewY;
}

APlayer::~APlayer()
{
}

void APlayer::Tick()
{
	switch (Engine::GetKeyCode())
	{
		case 'W':
		case 'w':
			Y--;
			break;

		case 'A':
		case 'a':
			X--;
			break;

		case 's':
		case 'S':
			Y++;
			break;

		case 'd':
		case 'D':
			X++;
			break;

		case 'q':
		case 'Q':
			//Singleton 
			break;
	}
}