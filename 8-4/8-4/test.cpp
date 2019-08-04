#include<iostream>
#include<vector>
#include<queue>
#include<unordered_map>
using namespace std;
/*
// Employee info
class Employee {
public:
	// It's the unique ID of each node.
	// unique id of this employee
	int id;
	// the importance value of this employee
	int importance;
	// the id of direct subordinates
	vector<int> subordinates;
};
*/
//员工重要度
class Solution {
public:
	int getImportance(vector<Employee*> employees, int id) {
		queue<int> q;
		q.push(id);
		unordered_map<int, Employee*> info;
		for (auto& e : employees)
		{
			info[e->id] = e;
		}
		int sum = 0;
		while (!q.empty())
		{
			int curid = q.front();
			q.pop();
			sum += info[curid]->importance;
			for (auto& subid : info[curid]->subordinates)
			{
				q.push(subid);
			}
		}
		return sum;
	}
};
//N叉树的层序遍历
/*
// Definition for a Node.
class Node {
public:
	int val;
	vector<Node*> children;

	Node() {}

	Node(int _val, vector<Node*> _children) {
		val = _val;
		children = _children;
	}
};
*/
class Solution {
public:
	vector<vector<int>> levelOrder(Node* root) {
		queue<Node*> q;
		if (root)
			q.push(root);
		vector<vector<int>> Mat;
		while (!q.empty())
		{
			int sz = q.size();
			vector<int> row;
			while (sz--)
			{
				Node* curNode = q.front();
				q.pop();
				row.push_back(curNode->val);
				for (auto& child : curNode->children)
				{
					q.push(child);
				}
				Mat.push_back(row);
			}
		}
		return Mat;
	}
};
//腐烂的橘子
/*class pair
{
	int first;
	int second;
}*/
class Solution {
public:
	int orangesRotting(vector<vector<int>>& grid) {
		static int pos[4][2] = { {1,0},{-1,0},{0,-1},{0,1} };
		//存放坐标
		queue<pair<int, int>> q;
		//第一步，找到所有坏的橘子
		int row = grid.size();
		int col = grid[0].size();
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{
				//存放坏橘子的坐标
				if (grid[i][j] == 2)
					q.push(make_pair(i, j));
			}
		}
		int mintime = 0;
		while (!q.empty())
		{
			int flag = 0;
			int sz = q.size();
			while (sz--)
			{
				pair<int, int> curPos = q.front();
				q.pop();
				for (int i = 0; i < 4; i++)
				{
					int x = curPos.first + pos[i][0];
					int y = curPos.second + pos[i][1];
					if (x >= row || x < 0 || y >= col || y < 0)
						continue;
					if (grid[x][y] == 1)
					{
						grid[x][y] = 2;
						q.push(make_pair(x, y));
						flag = 1;
					}
				}
			}
			if (flag)
				++mintime;
		}
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{
				if (grid[i][j] == 1)
					return -1;
			}
		}
		return mintime;
	}
};
//单词接龙
class Solution {
public:
	int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
		//队列，起始存放begin word
		queue<string> q;
		q.push(beginWord);
		unordered_set<string> visit;
		visit.insert(beginWord);
		unordered_set<string> dict;
		for (auto& wd : wordList)
		{
			dict.insert(wd);
		}
		int min = 0;
		while (!q.empty())
		{
			int sz = q.size();
			while (sz--)
			{
				string cur = q.front();
				q.pop();
				if (cur == endWord)
					return min + 1;
				for (int i = 0; i < cur.size(); i++)
				{
					string tmp = cur;
					for (char ch = 'a'; ch <= 'z'; ch++)
					{
						tmp[i] = ch;
						if (dict.find(tmp) != dict.end() && visit.find(tmp) != visit.end())
						{
							q.push(tmp);
							visit.insert(tmp);
						}
					}
				}
			}
			++min;
		}
		return 0;
	}
};
//打开转盘所
class Solution {
public:
	int openLock(vector<string>& deadends, string target) {
		unordered_set<string> Set(deadends.begin(), deadends.end());
		if (Set.find("0000") != Set.end())
			return -1;
		queue<string> que;
		que.push("0000");
		unordered_set<string> book;
		book.insert("0000");
		int ret = 0;
		while (!que.empty())
		{
			int sz = que.size();
			for (int i = 0; i < sz; i++)
			{
				string curStr = que.front();
				que.pop();
				if (curStr == target) return ret;
				//四位密码锁，每个位置每次都可以转一次
				for (int j = 0; j < 4; j++) {
					string newStr1 = curStr, newStr2 = curStr;
					//当前位置可以向前或者向后拨一位
					newStr1[j] = newStr1[j] == '9' ? '0' : newStr1[j] + 1;
					newStr2[j] = newStr2[j] == '0' ? '9' : newStr2[j] - 1;
					if (Set.find(newStr1) == Set.end()
						&& book.find(newStr1) == book.end()) {
						que.push(newStr1);
						book.insert(newStr1);
					}
					if (Set.find(newStr2) == Set.end()
						&& book.find(newStr2) == book.end()) {
						que.push(newStr2);
						book.insert(newStr2);
					}
				}
			}
			ret++;
		}
		return -1;
	}
};