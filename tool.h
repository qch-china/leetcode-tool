//tool.h
#ifndef TOOL_H_
#define TOOL_H_

#include <iostream>
#include <iomanip>
#include <climits>
#include <vector>
#include <cstdarg>
#include <string>
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
void Print(int arr[], int count);

//输出vector<int>
void Print(const vector<int> &vec);

//输出vector< vector<int> >
void Print(const vector< vector<int> > &vec);

//创建和输出vector<string>
void Print(const vector<string> &vec);

//创建，销毁，输出链表
ListNode *ListCreate(const vector<int> &vec);
void DestroyList(ListNode *head);
void Print(ListNode *head);

//创建，销毁，输出二叉树
TreeNode *TreeCreate(const vector<int> &vec);
void DestroyTree(TreeNode *root);
void Print(TreeNode *root);

#endif
