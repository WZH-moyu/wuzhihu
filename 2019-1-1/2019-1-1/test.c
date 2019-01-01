#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//二叉树相同（结构相同，对应的值相等）
//对称二叉树

////bool isMirror(struct TreeNode *p, struct TreeNode *q)
////{
////	if ((p == NULL) && (q == NULL)){
////		return true;
////	}
////	if ((p == NULL) || (q == NULL)){
////		return false;
////	}
////	return p->val == q->val
////		&& isMirror(p->left, q->right)
////		&& isMirror(p->right, q->left);
////}
////
////bool isSymmetric(struct TreeNode* root) {
////	if (root == NULL)
////		return true;
////	return isMirror(root->left, root->right);
////}
//bool isMirror(struct TreeNode *p, struct TreeNode *q) 镜像
//{
//	if (p->val != q->val)
//		return false;
//	if (isMirror(p->right, q->left) && isMirror(left, q->right))
//		return true;
//}
//构建二叉树
TreeNode *Find(TreeNode *root, char x)
{
	if (root == NULL){
		return NULL;
	}
	if (root->val==x)
	{
		return root;
	}
	TreeNode *result = Find(root->left, x); 
	if (result != NULL){
		return result;
	}
	TreeNode *result = Find(root->right, x);
	if (result != NULL){
		return result;
	}
	else
		return NULL;
}