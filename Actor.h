#pragma once

#ifndef __AACTOR_H__
#define __AACTOR_H__   

class AActor
{
public:
	AActor();
	AActor(int NewX, int NewY);
	virtual ~AActor();

	void Draw();

	int X;
	int Y;

	char Shape;
};

#endif


