#pragma once
#define _WINSOCK_DEPRECATED_NO_WARNINGS // �ֽ� VC++ ������ �� ��� ����
#pragma comment(lib, "ws2_32")

#include <winsock2.h>
#include <stdlib.h>
#include <iostream>
#include <tchar.h>

class Server
{
private:
	static int ServerPort;
	static int BufSize;
	WSADATA wsa;
	SOCKET sock;
	SOCKADDR_IN address;

public:
	Server();
	~Server();

	void setSocket();
	void bindSocket();
	void listenSocket();
	
	void update();
	void acceptClient();
	void closeSocket();
};

