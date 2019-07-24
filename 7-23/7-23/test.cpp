//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//int main()
//{
//	int m=0, n=0;
//	int count = 0;
//	while (std::cin >> m >> n) 
//	{
//		vector<vector<char>> v(m, vector<char>(n, '.'));
//		if (v.empty())
//			return 0;
//		for (size_t i = 0; i < m; i++)
//		{
//			for (size_t j = 0; j < n; j++)
//			{
//				cin >> v[i][j];
//				if (v[i][j] == '#')
//					count++;
//			}
//		}
//		for (size_t i = 0; i < m; i++)
//		{
//			for (size_t j = 0; j < n; j++)
//			{
//				if ((i - 1 >= 0) && (i + 1 <= m) && (j - 1 >= 0) && (j + 1 <= n))
//				{
//					if ((v[i][j] == '.') && (v[i - 1][j] == '#'&&v[i + 1][j] == '#'&&v[i][j - 1] == '#'&&v[i][j + 1] == '#'))
//						count++;
//				}
//			}
//		}
//		cout << count << endl;
//	}
//	return 0;
//}
#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;
int uniquePathsWithObstacles(vector<vector<int> > &obstacleGrid)
{
	if (obstacleGrid.empty() || obstacleGrid[0].empty())
	{
		return 0;
	}
	const int M = obstacleGrid.size();
	const int N = obstacleGrid[0].size();
	vector<vector<int> > ret(M, vector<int>(N, 0));
	for (int i = 0; i < M; ++i)
	{            // 第0列中只要前面有障碍，后面都无法到达            
		if (obstacleGrid[i][0])
		{
			break;
		}
		else
		{
			ret[i][0] = 1;
		}
	}
	for (int i = 0; i < N; ++i)
	{
		// // 第0行中只要前面有障碍，后面都无法到达
		if (obstacleGrid[0][i])
		{
			break;
		}
		else {
			ret[0][i] = 1;
		}
	}
	for (int i = 1; i < M; ++i)
	{
		for (int j = 1; j < N; ++j)
		{                // obstacleGrid[i][j] = 1 时，F(i,j)无法到达
			if (obstacleGrid[i][j])
			{
				ret[i][j] = 0;
			}
			else {
				// F(i,j) = F(i-1,j) + F(i,j-1)                    
				ret[i][j] = ret[i - 1][j] + ret[i][j - 1];
			}
		}
	}
	return ret[M - 1][N - 1];
}
int main()
{
	int n, m, k;
	while (cin >> n >> m >> k)
	{
		vector<vector<int>> v(n, vector<int>(m, 0));
		double num = uniquePathsWithObstacles(v);
		int x, y;
		for (int i = 0; i < k; i++)
		{
			cin >> x >> y;
			if(v[x - 1][y - 1] ==0)
				v[x - 1][y - 1] = 1;
			else
				v[x - 1][y - 1] = 0;
		}
		double ret = uniquePathsWithObstacles(v);
		double temp = ret / num;
		cout << fixed<<setprecision(2)<<temp << endl;
	}
	return 0;
}
