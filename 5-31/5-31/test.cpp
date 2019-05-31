//////#define _CRT_SECURE_NO_WARNINGS
////#include<iostream>
////#include<vector>
////using namespace std;
//////class Board {
//////public:
//////	bool checkWon(vector<vector<int> > board) {
//////		// write code her
//////	/*	int ret = 0;
//////		for (int i = 0; i < 3; i++)
//////		{
//////			for (int j = 0; j < 2; j++)
//////			{
//////				if (board[i][j] == board[i][j + 1] == '1')
//////					ret++;
//////				else if (board[i][j] == board[i][j + 1] == '-1')
//////					ret--;
//////				else
//////					ret = 0;
//////			}
//////			if (ret == 2)
//////				return true;
//////			else if (ret == -2)
//////				return false;
//////		}
//////		for (int i = 0; i < 2; i++)
//////		{
//////			for (int j = 0; j < 3; j++)
//////			{
//////				if (board[j][i] == board[j][i + 1] == '1')
//////					ret++;
//////				else if (board[j][i] == board[j][i + 1] == '-1')
//////					ret--;
//////				else
//////					ret = 0;
//////			}
//////			if (ret == 2)
//////				return true;
//////			else if (ret == -2)
//////				return false;
//////		}*/
//////		for (int i = 0; i < 3; i++)
//////		{
//////			if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] == 1)
//////				return true;
//////			else
//////				return false;
//////		}
//////		for (int i = 0; i < 3; i++)
//////		{
//////			if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] == 1)
//////				return true;
//////			else
//////				return false;
//////		}
//////		if ((board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[2][2] == 1) || (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[0][2] == 1))
//////			return true;
//////		else
//////			return false;
//////		/*if ((board[0][0] == board[1][1] == board[2][2] == '1') || (board[2][0] == board[1][1] == board[0][2] == '1'))
//////			return true;
//////		else if ((board[0][0] == board[1][1] == board[2][2] == '-1') || (board[2][0] == board[1][1] == board[0][2] == '-1'))
//////			return false;
//////		return 0*/;
//////	}
//////};
////#include <stdio.h>
////#include <stdlib.h>
////#include <string.h>
////int GetPwdSecurityLevel(char *password)
////{
////	int score[5], sum = 0;
////	int len, i;
////	int alphaflag = 0;
////	int digitCnt = 0;
////	int punctCnt = 0;
////	char *p = password;
////	len = strlen(password);
////	if (len>7)
////		score[0] = 25;
////	else if (len>4)
////		score[0] = 10;
////	else
////		score[0] = 0;
////	while (*p != '\0')
////	{
////		if (isalpha(*p))
////		{
////			if (alphaflag == 0)
////			{
////				if (isupper(*p))
////					alphaflag = 1;
////				else
////					alphaflag = 2;
////			}
////			else if (alphaflag == 1)
////			{
////				if (islower(*p))
////					alphaflag = 3;
////			}
////			else if (alphaflag == 2)
////			{
////				if (isupper(*p))
////					alphaflag = 3;
////			}
////		}
////		else if (isdigit(*p))
////		{
////			digitCnt++;
////		}
////		else if (ispunct(*p))
////		{
////			punctCnt++;
////		}
////		p++;
////	}
////
////	if (alphaflag>2)
////		score[1] = 20;
////	else if (alphaflag>0)
////		score[1] = 10;
////	else
////		score[1] = 0;
////	if (digitCnt>1)
////		score[2] = 20;
////	else if (digitCnt>0)
////		score[2] = 10;
////	else
////		score[2] = 0;
////	if (punctCnt>1)
////		score[3] = 25;
////	else if (punctCnt>0)
////		score[3] = 10;
////	else
////		score[3] = 0;
////	if (score[1]>0 && score[2]>0)
////	{
////		if (score[3]>0)
////		{
////			if (score[1]>10)
////				score[4] = 5;
////			else
////				score[4] = 3;
////		}
////		else
////			score[4] = 2;
////	}
////	else
////		score[4] = 0;
////	for (i = 0; i<5; i++)
////	{
////		sum += score[i];
////		printf("%d,", score[i]);
////	}
////	printf("\n%d\n", sum);
////	return sum;
////}
////int main()
////{
////	char password[2048], result[20];
////	int sum = 0;
////	scanf("%[^\n]", password);
////	sum = GetPwdSecurityLevel(password);
////	if (sum >= 90)
////		strcpy(result, "VERY_SECURE");
////	else if (sum >= 80)
////		strcpy(result, "SECURE");
////	else if (sum >= 70)
////		strcpy(result, "VERY_STRONG");
////	else if (sum >= 60)
////		strcpy(result, "STRONG");
////	else if (sum >= 50)
////		strcpy(result, "AVERAGE");
////	else if (sum >= 25)
////		strcpy(result, "WEAK");
////	else
////		strcpy(result, "VERY_WEAK");
////	printf("%s\n", result);
////	return 0;
////}
//#include<stdlib.h>
//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	string s1;
//	getline(cin, s1);
//	int len = 0;
//	int s = 0, f = 0, dz = 0, xz = 0;
//	int password = 0;
//	if (s1.size() >= 8)
//		len = 25;
//	else if (s1.size() <= 4)
//		len = 5;
//	else
//		len = 10;
//	int i = 0;
//	while (i<s1.size())
//	{
//		if (s1[i] >= 48 && s1[i] <= 57)
//			s++;
//		else if (s1[i] >= 65 && s1[i] <= 90)
//			dz++;
//		else if (s1[i] >= 97 && s1[i] <= 122)
//			xz++;
//		else
//			f++;
//		i++;
//	}
//	if (dz == s1.size() && xz == s1.size())
//		password += 10;
//	else if (dz>0 && xz>0)
//		password += 20;
//	if (s == 1)
//		password += 10;
//	else if (s>1)
//		password += 20;
//	if (f == 1)
//		password += 10;
//	else if (f>1)
//		password += 25;
//	if (s>0 && dz>0 && xz>0 && f>0)
//		password += 5;
//	else if (s>0 && (dz + xz)>0 && f>0)
//		password += 3;
//	else if (s>0 && (dz + xz)>0)
//		password += 2;
//	password += len;
//	if (password >= 90)
//		cout << "VERY_SECURE" << endl;
//	else if (password >= 80)
//		cout << "SECURE" << endl;
//	else if (password >= 70)
//		cout << "VERY_STRONG" << endl;
//	else if (password >= 60)
//		cout << "STRONG" << endl;
//	else if (password >= 50)
//		cout << "AVERAGE" << endl;
//	else if (password >= 25)
//		cout << "WEAK" << endl;
//	else if (password >= 0)
//		cout << "VERY_WEAK" << endl;
//	system("pause");
//	return 0;
//}
//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//	vector<int> v1;
//	v1.resize(32);
//	int num = 0;
//	int s = 0;
//	int g = 0;
//	cin >> num;
//	int ret = num;
//	int i = 0;
//	while (ret)
//	{
//		v1[i] = ret % 2;
//		ret = ret / 2;
//		i++;
//	}
//	for (int j = 0; j < 32; j++)
//	{
//		if (v1[j] == 1)
//			s++;
//		else
//		{
//			if (s>g)
//			{
//				g = s;
//			}
//			s = 0;
//		}
//	}
//	cout << g << endl;
//		return 0;
//}
//#include<stdlib.h>
//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//		vector<int> v1;
//		v1.resize(32);
//		int num = 0;
//		int s = 0;
//		int g = 0;
//		cin >> num;
//		int ret = num;
//		int i = 0;
//		while (ret)
//		{
//			v1[i] = ret % 2;
//			ret = ret / 2;
//			i++;
//		}
//		
//	for (int j = 0; j < i; j++)
//	{
//		if (v1[j] == 1)
//			s++;
//		else
//		{
//			if (s>g)
//			{
//				g = s;
//			}
//			s = 0;
//		}
//	}
//	cout << g << endl;
//	system("pause");
//	return 0;
//}
#include<iostream>
using namespace std;
class LCA {
public:
	int getLCA(int a, int b) {
		// write code here
		for (int j = a; j > 0; j = j / 2)
		{
			for (int i = b; i > 0; i = i / 2)
			{
				if (i == j)
				{
					cout << i << endl;
					return 0;
				}
			}
		}
	}
};
