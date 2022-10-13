#include "Player.h"

APlayer::APlayer()
{
	Shape = 'P';
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