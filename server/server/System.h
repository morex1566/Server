#pragma once
#include "Server.h"
#include <memory>

class System
{
private:
	std::unique_ptr<Server> server;

public:
	System();
	~System();

	void init();
	void frame();
	void shutdown();

};

