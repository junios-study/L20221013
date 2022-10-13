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

	//���� ���� �Լ�
	virtual void Initialize() = 0;
	virtual void Terminalize() = 0;

	void Run();

protected:

	virtual void Input();
	virtual void Tick();
	virtual void Render();

	void Load(string MapFilename);

	FWorld* MyWorld;
};

