#pragma once
#include <string>

using namespace std;

class FWorld;

//�߻� Ŭ����
class Engine
{
public:
	Engine();
	virtual ~Engine();

	virtual void BeginPlay();

	virtual void EndPlay();

	//���� ���� �Լ�
	virtual void Initialize() = 0;
	virtual void Terminalize() = 0;

	void Run();
	void QuitGame();


	inline static int GetKeyCode()
	{
		return KeyCode;
	}



protected:

	virtual void Input();
	virtual void Tick();
	virtual void Render();

	void Load(string MapFilename);

	void SortActor();

	FWorld* MyWorld;

	static int KeyCode;

	bool bIsRunning = true;
};