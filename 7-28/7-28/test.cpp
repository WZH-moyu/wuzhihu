//#include<string>
//#include<vector>
//class Solution {
//public:
//	int numDistinct(std::string S, std::string T) {
//		if (S.empty())
//			return 0;
//		if (T.empty())
//			return 1;
//		int len1 = S.size();
//		int len2 = T.size();
//		std::vector<std::vector<int>> v(len1 + 1,std:: vector<int>(len2 + 1, 0));
//		v[0][0] = 1;
//		for (int i = 0; i <= len1; i++)
//			v[i][0] = 1;
//		for (int i = 1; i <= len1; i++)
//		{
//			for (int j = 1; j <= len2; j++)
//			{
//				if (S[i - 1] == T[j - 1])
//					v[i][j] = v[i - 1][j - 1] + v[i - 1][j];
//				else
//					v[i][j] = v[i - 1][j];
//			}
//		}
//		return v[len1][len2];
//	}
//};
//盒子装牌
#if 0
#include<iostream>
#include<vector>
#include<cstdlib>
using namespace std;
void DFS(int index, vector<int>&box, vector<int>&used, int n)
{
	if (index == n + 1)
	{
		for (int i = 1; i <= n; i++)
		{
			cout << box[i]<<' ';
		}
		cout << endl;
		return;
	}
	for (int i = 1; i <= n; i++)
	{
		if (used[i] == 0)
		{
			box[index] = i;
			used[i] = 1;
			//处理下一个盒子
			DFS(index + 1, box, used, n);
			used[i] = 0;
		}
	}
}
int main()
{
	int n = 0;
	vector<int>box;
	vector<int>used;
	int index = 1;
	cin >> n;
	box.resize(n + 1, 0);
	used.resize(n + 1, 0);
	DFS(index, box, used, n);
	system("pause");
	return 0;
}
#endif
//员工重要度
#include<unordered_map>
//#include<map>
class Solution {
public:
	int DFS(int id, std::unordered_map<int, std::employee*>&info)
	{
		int ret = info[id]->importance;
		for (int subid : info[id]->subordinates)
		{
			ret += DFS(subid, info);
		}
		return ret;
	}
	int getImportance(std::vector<employee*> employees, int id) {
		if (employees.empty())
			return 0;
		std::unordered_map<int, employee*>info;
		for (auto e : employees)
		{
			info(e->id) = e;
		}
		return DFS(id, info);
	}
};