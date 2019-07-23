#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
	int m=0, n=0;
	int count = 0;
	while (std::cin >> m >> n) 
	{
		vector<vector<char>> v(m, vector<char>(n, '.'));
		if (v.empty())
			return 0;
		for (size_t i = 0; i < m; i++)
		{
			for (size_t j = 0; j < n; j++)
			{
				cin >> v[i][j];
				if (v[i][j] == '#')
					count++;
			}
		}
		for (size_t i = 0; i < m; i++)
		{
			for (size_t j = 0; j < n; j++)
			{
				if ((i - 1 >= 0) && (i + 1 <= m) && (j - 1 >= 0) && (j + 1 <= n))
				{
					if ((v[i][j] == '.') && (v[i - 1][j] == '#'&&v[i + 1][j] == '#'&&v[i][j - 1] == '#'&&v[i][j + 1] == '#'))
						count++;
				}
			}
		}
		cout << count << endl;
	}
	return 0;
}