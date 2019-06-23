//#define _CRT_SECURE_NO_WARNINGS
//#define _CRT_SECURE_NO_DEPRECATE
//#define _WINSOCK_DEPRECATED_NO_WARNINGS

#define _CRT_SECURE_NO_WARNINGS
#define _WINSOCK_DEPRECATED_NO_WARNINGS
#pragma comment(lib, "Ws2_32.lib")
#include<stdio.h>
#include<WinSock2.h>
#include<iostream>
using namespace std;
#include<string.h>
int main(int argc, char* argv[])
{
	const int DEFAULT_PORT = 5000;
	WORD wVersionRequested;
	WSADATA wsaData;
	int err, iLen;
	wVersionRequested = MAKEWORD(2, 2);
	err = WSAStartup(wVersionRequested,&wsaData);
	if (err != 0)
	{
		cout << "¼ÓÔØWinSockÊ§°Ü!";
		return 0;
	}
	SOCKET sockSrv = socket(AF_INET, SOCK_STREAM, 0);
	if (sockSrv == INVALID_SOCKET)
	{
		cout << "socket()fail:" << WSAGetLastError() << endl;
		return 0;
	}
	SOCKADDR_IN addrSrv;
	addrSrv.sin_family = AF_INET;
	addrSrv.sin_addr.S_un.S_addr = htonl(INADDR_ANY);
	addrSrv.sin_port = htons(DEFAULT_PORT);
	err = bind(sockSrv, (SOCKADDR*)&addrSrv, sizeof(SOCKADDR));
	if (err != 0)
	{
		cout << "bind()fail:" << WSAGetLastError() << endl;
		return 0;
	}
	err = listen(sockSrv, 5);
	if (err != 0)
	{
		cout << "listen()fail:" << WSAGetLastError() << endl;
		return 0;
	}
	cout << "Server waiting....." << endl;
	SOCKADDR_IN addrClient;
	int len = sizeof(SOCKADDR);
	while (true)
	{
		SOCKET sockConn = accept(sockSrv, (SOCKADDR*)&addrClient, &len);
		if (sockConn == INVALID_SOCKET)
		{
			cout << "accept()fail:" << WSAGetLastError() << endl;
			break;
		}
		char sendBuff[1024], hostname[100];
		if ((gethostname, 100) != 0)
			strcpy(hostname, "None");
		sprintf(sendBuff, "welcome %s connected to %s!", inet_ntoa(addrClient.sin_addr), hostname);
		err = send(sockConn, sendBuff, strlen(sendBuff) + 1, 0);
		if (err != 0)
		{
			cout << "send()fail:" << WSAGetLastError() << endl;
			break;
		}
		char recvBuff[1024] = "\0";
		iLen = recv(sockConn, recvBuff, 1024, 0);
		if (iLen == SOCKET_ERROR)
		{
			cout << "recv()fail:" << WSAGetLastError() << endl;
			break;
		}
		recvBuff[iLen] = '\0';
		cout << recvBuff << endl;
		closesocket(sockConn);
	}
	closesocket(sockSrv);
	WSACleanup();
	return 0;
}