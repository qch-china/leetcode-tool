//tool.h
#ifndef TOOL_H_
#define TOOL_H_

#include <iostream>
#include <iomanip>
#include <climits>
#include <vector>
#include <cstdarg>
#include <string>
#include <cstdio>
using namespace std;

//链表结点
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

//树结点
struct TreeNode 
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x=0) : val(x), left(NULL), right(NULL) {}
};

//输出普通数组
void ArrayPrint(int arr[], int count);

//创建和输出vector<int>
vector<int> IntVectorCreate(int count, ...);
void IntVectorPrint(const vector<int> &vec);

//输出vector< vector<int> >
void IntVector2DPrint(const vector< vector<int> > &vec);

//创建和输出vector<string>，不定参数的类型为const char*
vector<string> StringVectorCreate(int count, ...);
void StringVectorPrint(const vector<string> &vec);

//创建，销毁，输出链表
ListNode *ListCreate(int count, ...);
void DestroyList(ListNode *head);
void ListPrint(ListNode *head);

//创建，销毁，输出二叉树
TreeNode *TreeCreate(int count, ...);
void DestroyTree(TreeNode *root);
void TreePrint(TreeNode *root);

#endif
