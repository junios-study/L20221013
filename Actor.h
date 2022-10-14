#pragma once

#ifndef __AACTOR_H__
#define __AACTOR_H__   

class AActor
{
public:
	AActor();
	AActor(int NewX, int NewY);
	virtual ~AActor();

	virtual void Render();
	virtual void Tick();

	virtual void BeginPlay();
	virtual void EndPlay();

	int X;
	int Y;

	char Shape;

	int ZOrder;

	bool operator<(AActor& RHS)
	{
		return (this->ZOrder) < (RHS.ZOrder);
	}

	static inline bool Compare(AActor* First, AActor* Second)
	{
		return (First->ZOrder) < (Second->ZOrder);
	}
};

#endif


