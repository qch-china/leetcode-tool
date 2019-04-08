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

//������
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

//�����
struct TreeNode 
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x=0) : val(x), left(NULL), right(NULL) {}
};

//�����ͨ����
void Print(int arr[], int count);

//���vector<int>
void Print(const vector<int> &vec);

//���vector< vector<int> >
void Print(const vector< vector<int> > &vec);

//���������vector<string>
void Print(const vector<string> &vec);

//���������٣��������
ListNode *ListCreate(const vector<int> &vec);
void DestroyList(ListNode *head);
void Print(ListNode *head);

//���������٣����������
TreeNode *TreeCreate(const vector<int> &vec);
void DestroyTree(TreeNode *root);
void Print(TreeNode *root);

#endif
