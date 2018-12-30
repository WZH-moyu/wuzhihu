//树：顺序存储   链式存储
//
//二叉树（有序树：左子和右子不同；有左右区分）
//顺序存储（存储完全二叉树；浪费空间）  链式存储（深度优先（前序遍历 中序遍历 后序遍历）广度优先（层序遍历））
//前序遍历：第一次遇到（递归视角：根左右）方便找根
//中序遍历：第二次遇到（递归视角：左根右）方便找根
//后序遍历：第三次遇到（递归视角：左右根）方便区分左右子树
//完全二叉树
//已知 parent  【left】=2*【parent】+1；【right】=2*【parent】+2
#include<stdio.h>
#include<stdlib.h>
struct BinaryTreeNode {
	struct BinTreeNode* left;   // 指向当前节点左孩子  
	struct BinTreeNode* right; // 指向当前节点右孩子   
	int val;// 当前节点值域 
};