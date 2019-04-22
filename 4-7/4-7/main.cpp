#include<iostream>
#include<stdlib.h>
#include<vector>
#include<stack>
#include<queue>

using namespace std; 
//
class Solution {
public:
	void preorder(TreeNode* root, vector<int>& v)
	{
		if (root == nullptr)
			return;
		v.push(root->val);
		preorder(root->left, v);
		preorder(root->right, v);
	}
	vector<int> preorderTraversal(TreeNode* root) {
		/*vector<int> v;
		preorder(root, v);
		return;*/
		vector<int> v;
		stack<TreeNode*> st;
		TreeNode* cur = root;
		while (cur || !st.empty())
		{
			while (cur)
			{
				st.push(cur);
				v.push_back(cur->val);
				cur = cur->left;
			}
			cur = st.top();
			st.pop();
			cur = cur->right;
		}
		return v;
	}
};

//class Solution {
//public:
//	bool getPath(TreeNode* cur, TreeNode* node, stack<TreeNode*> & s)
//	{
//		if (cur == nullptr)
//			return false;
//		//先入栈
//		s.push(cur);
//		//当前节点是要找的节点，说明路径搜索完成
//		if (cur == node)
//			return true;
//		//当前节点不是要找的节点，再去看看左右节点
//		if (getPath(cur->left, node, s))
//			return true;
//		if (getPath(cur->right, node, s))
//			return true;
//		//当前节点不存在于要寻找节点的路径上，出栈
//		s.pop();
//		return false;
//	}
//	TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
//		stack<TreeNode*> path1;
//		stack<TreeNode*> path2;
//		getPath(root, p, path1);
//		getPath(root, q, path2);
//		while (path1.size()!=path2.size())
//		if (path1.size() > path2.size())
//		{
//			path1.pop();
//		}
//		else
//		{
//			path2.pop();
//		}
//		while (!path1.empty())
//		{
//			if (path1.top() == path2.top())
//				break;
//			path1.pop();
//			path2.pop();
//		}
//		return path1.top();
//	}
//};

//class MyQueue {
//public:
//	/** Initialize your data structure here. */
//	MyQueue() {
//
//	}
//
//	/** Push element x to the back of queue. */
//	void push(int x) {
//		_pushS.push(x);
//	}
//
//	/** Removes the element from in front of queue and returns that element. */
//	int pop() {
//		if (_popS.empty())
//		{
//			while (!_pushS.empty())
//			{
//				_popS.push(_pushS.top());
//				_pushS.pop();
//			}
//		}
//		int val = _popS.top();
//		_popS.pop();
//		return val;
//	}
//
//	/** Get the front element. */
//	int peek() {
//		if (_popS.empty())
//		{
//			while (!_pushS.empty())
//			{
//				_popS.push(_pushS.top());
//				_pushS.pop();
//			}
//		}
//		return _popS.top();
//	}
//
//	/** Returns whether the queue is empty. */
//	bool empty() {
//		return _popS.empty() && _pushS.empty();
//	}
//private:
//	stack<int> _pushS;
//	stack<int> _popS;
//};


//class MyStack {
//public:
//	/** Initialize your data structure here. */
//	MyStack() {
//
//	}
//
//	/** Push element x onto stack. */
//	void push(int x) {
//		if (a.empty())
//			a.push(x);
//		else
//			b.push(x);
//	}
//
//	/** Removes the element on top of the stack and returns that element. */
//	int pop() {
//		if (a.empty())
//		{
//			while (a.size() != 1)
//			{
//				b.push(a.front());
//				a.pop();
//			}
//			int val = a.front();
//			a.pop();
//			return val;
//		}
//		else
//		{
//			while (b.size() != 1)
//			{
//				a.push(b.front());
//				b.pop();
//			}
//			int val = b.front();
//			b.pop();
//			return val;
//		}
//	}
//
//	/** Get the top element. */
//	int top() {
//		if (!a.empty())
//			a.back();
//		else
//			b.back();
//	}
//
//	/** Returns whether the stack is empty. */
//	bool empty() {
//		return a.empty() && b.empty();
//	}
//private:
//	queue<int> a;
//	queue<int> b;
//};
//class Solution {
//public:
//	int getHeigh(TreeNode* root)
//	{
//		if (root == nullptr)
//			return 0;
//		int left = getHeigh(root->left);
//		int right = getHeigh(root->right);
//		return left>right ? left + 1 : right + 1;
//	}
//	vector<vector<int>> levelOrder(TreeNode* root) {
//		queue<TreeNode*>node;
//		vector <vector<int>> treeVec;
//		queue<int> index;
//		if (root)
//		{
//			node.push(root);
//			index.push(0);
//		}
//		while (!node.empty())
//		{
//			TreeNode* cur = node.front();
//			node.pop();
//			int curIndex = index.front();
//			index.pop();
//			treeVec[curIndex].push_back(cur->val);
//			if (cur->left)
//			{
//				node.push(cur->left);
//				index.push(curIndex + 1);
//			}
//			if (cur->right)
//			{
//				node.push(cur->right);
//				index.push(curIndex + 1);
//			}
//		}
//		return treeVec;
//	}
//};
//二叉树的镜像
//递归写法
/*class Solution {
public:
	void Mirror(TreeNode *pRoot) {
		if (pRoot == nullptr)
			return;
		swap(pRoot->left, pRoot->right);
		Mirror(pRoot->left);
		Mirror(pRoot->right);
	}
};*/
//非递归写法
//class Solution {
//public:
//	void Mirror(TreeNode *pRoot) {
//		queue<TreeNode*> q;
//		if (pRoot)
//			q.push(pRoot);
//		while (q.empty())
//		{
//			TreeNode* cur = q.front();
//			q.pop();
//			swap(cur->left, cur->right);
//			if (cur->left)
//				q.push(cur->left);
//			if (cur - >right)
//				q.push(cur -> right);
//		}
//	}
//};
//数组中第k个最大元素
//class Solution {
//public:
//	int findKthLargest(vector<int>& nums, int k) {
//		priority_queue<int> pq;
//		for (const auto& e : nums)
//			pq.push(e);
//		for (int i = 0; i<k - 1; i++)
//			pq.pop();
//		return pq.top();
//	}
//};
//template<class T,class  Container=deque<T>>
//class Queue
//{
//public:
//	void Push(const T& x)
//	{
//		_c.push_back(x);
//	}
//	void Pop()
//	{
//		_c.pop_front();
//	}
//	T& Front()
//	{
//		return _c.front();
//	}
//	size_t Size()
//	{
//		return _c.size();
//	}
//	bool Empty()
//	{
//		return _c.empty();
//	}
//	T& Back()
//	{
//		return _c.back();
//	}
//private:
//	Container _c;
//};
//int main()
//{
//	Queue<int> q;
//	q.Push(1);
//	q.Push(2);
//	q.Push(3);
//	q.Push(4);
//	q.Push(5);
//	while (!q.Empty())
//	{
//		cout << q.Front() << endl;
//		q.Pop();
//	}
//	system("pause");
//	return 0;
//}
//仿函数-函数对象;重载“（）”运算符·1
