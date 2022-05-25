#pragma once

#include "Server.h"
#include "Thread.h"

#include <vector>

using namespace std;

class System
{
public:
	System();
	~System();

	void Begin();
	void Run();
	void Shutdown();

private:
	vector<Server> servers;
	Thread threader;
};

