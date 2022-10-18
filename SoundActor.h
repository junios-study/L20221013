#pragma once
#include "Actor.h"
#include "SDL_mixer.h"
#include <string>

using namespace std;

class ASoundActor : public AActor
{
public:
	ASoundActor();
	ASoundActor(string InFileName, bool InIsLoop);
	~ASoundActor();

	Uint64 ElapsedTime;
	Uint64 ExecuteTime;

	string Filename;
	int Volume;

	bool bIsLoop;

	void Play();
	void Stop();

	virtual void Tick() override;
	virtual void BeginPlay() override;
	virtual void Render() override
	{

	}


	Mix_Music* Music;
	Mix_Chunk* Sound;
};

