#include "Goal.h"

AGoal::AGoal()
{
	Shape = 'G';
	ZOrder = 30;
}

AGoal::AGoal(int NewX, int NewY)
	: AGoal()
{
	X = NewX;
	Y = NewY;
}

AGoal::~AGoal()
{
}