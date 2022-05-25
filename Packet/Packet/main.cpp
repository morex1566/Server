#include "System.h"
#include "Thread.h"	
#include "Server.h"

int main()
{
	System system;

	system.Begin();
	system.Run();
	system.Shutdown();

	return;
}