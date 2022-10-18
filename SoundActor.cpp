#include "SoundActor.h"
#include "MyEngine.h"
#include "World.h"

ASoundActor::ASoundActor()
{
	Filename = "";
	bIsLoop = false;
	Music = nullptr;
	Sound = nullptr;
	Volume = 30;
	ElapsedTime = 0;
	ExecuteTime = 0;
}

ASoundActor::ASoundActor(string InFileName, bool InIsLoop)
	: ASoundActor()
{
	Filename = InFileName;
	bIsLoop = InIsLoop;
	if (bIsLoop)
	{
		Music = Mix_LoadMUS(Filename.c_str());
		Mix_PlayMusic(Music, bIsLoop);

	}
	else
	{
		Sound = Mix_LoadWAV(Filename.c_str());
		Mix_PlayChannel(-1, Sound, false);
		ExecuteTime = 100;

	}
}

ASoundActor::~ASoundActor()
{
	if (Music)
	{
		Mix_FreeMusic(Music);
	}
	if (Sound)
	{
		Mix_FreeChunk(Sound);
	}
}

void ASoundActor::Play()
{
	if (Music)
	{
		Mix_PlayMusic(Music, bIsLoop);
	}

	if (Sound)
	{
		Mix_PlayChannel(-1, Sound, false);
	}

}

void ASoundActor::Stop()
{
	if (Music)
	{
		Mix_HaltMusic();

	}

	if (Sound)
	{
		Mix_HaltChannel(-1);
	}
}

void ASoundActor::Tick()
{
	ElapsedTime += GEngine->GetWorldDeltaSeconds();
	if (ExecuteTime <= ElapsedTime && !bIsLoop)
	{
		GEngine->GetWorld()->DestroyActor(this);
	}
}

void ASoundActor::BeginPlay()
{
	if (Music)
	{
		Play();
	}
}
