//#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int i = 0;
class Solution {
public:
	vector<int> v;
	int StrToInt(string str) {
		getline(cin, str);
		while (i < str.size())
		{
			if (i == 0 && (str[i] == 43 || str[i] == 45))
				i++;
			if (str[i] < 48 && str[i] > 57)
			{
				v.clear();
				return 0;
			}
			else
			{
				v[i] = str[i];
				i++;
			}
		}
		if ()

	}
};
//(str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 & str[i] <= 122)
