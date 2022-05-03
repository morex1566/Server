#include "Server.h"
#include <winsock2.h>
#include <stdlib.h>
#include <stdio.h>
#include <tchar.h>

void Server::socket()
{
	
	listenSock = socket(AF_INET, SOCK_STREAM, 0);
	if (listen_sock == INVALID_SOCKET) err_quit("socket()");
	return;
}

void Server::bind()
{

}