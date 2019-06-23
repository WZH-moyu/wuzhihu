#define _CRT_SECURE_NO_WARNINGS
#define _WINSOCK_DEPRECATED_NO_WARNINGS
#pragma comment(lib, "Ws2_32.lib")
#include<stdio.h>
//#include<string>
#include<winsock2.h>
#include<iostream>
using namespace std;
#include<string.h>
int main(int argc,char* argv[])
{
	const int DEFAULT_PORT = 5000;
	WORD wVersionRequested;
	WSADATA wsaData;
	int err, iLen;
	char ip[] = "192.168.47.1";
	if (argc < 2)
	{
		cout << "Command:TcpEx_Client ServerIP" << endl;
		return 0;
	}
	wVersionRequested = MAKEWORD(2, 2);
	err = WSAStartup(wVersionRequested, &wsaData);
	if (err != 0)
	{
		cout << "¼ÓÔØWinSockÊ§°Ü!";
		return 0;
	}
	SOCKET sockClient = socket(AF_INET, SOCK_STREAM, 0);
	if (sockClient == INVALID_SOCKET)
	{
		cout << "socket()fail:" << WSAGetLastError() << endl;
		return 0;
	}
	SOCKADDR_IN addrSrv;
	addrSrv.sin_family = AF_INET;
	addrSrv.sin_addr.S_un.S_addr = inet_addr(ip);
	addrSrv.sin_port = htons(DEFAULT_PORT);
	err = connect(sockClient, (SOCKADDR*)&addrSrv, sizeof(SOCKADDR));
	if (err == INVALID_SOCKET)
	{
		cout << "connect()fail:" << WSAGetLastError() << endl;
		return 0;
	}
	char sendBuff[1024], hostname[100];
	if (gethostname(hostname, 100) != 0)
		strcpy(hostname, "None");
	strcpy(sendBuff, hostname);
	scanf("%s", sendBuff);
	strcat(sendBuff, "have connect to you!");
	err = send(sockClient, sendBuff, strlen(sendBuff) + 1, 0);
	if (err == SOCKET_ERROR)
	{
		cout << "send()fail:" << WSAGetLastError() << endl;
		return 0;
	}
	while (true)
	{
		char s1[1024];
		memset(sendBuff, 0, sizeof(sendBuff));
		scanf("%s", s1);
		err = send(sockClient, s1, strlen(s1) + 1, 0);
		char recvBuff[1024];
		iLen = recv(sockClient, recvBuff, 1024, 0);
		if (iLen == 0)
			return 0;
		else if (iLen == SOCKET_ERROR)
		{
			cout << "recv()fail:" << WSAGetLastError() << endl;
			return 0;
		}
		else
		{
			recvBuff[iLen] = '\0';
			fflush(stdout);
			cout << recvBuff << endl;
		}
	}
	closesocket(sockClient);
	WSACleanup();
}