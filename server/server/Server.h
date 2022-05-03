#pragma once
#include <Windows.h>
#include <vector>
#include <thread>

class Server
{
private:
	WSADATA windowsock;
	SOCKET listenSock;
	SOCKADDR_IN serveraddr;
	std::vector<std::thread> threads;

public:
	void socket();
	void bind();
	void listen();
	void accept();
	void allocThread();

private:

};

