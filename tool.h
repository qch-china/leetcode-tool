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

//
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

//
struct TreeNode 
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x=0) : val(x), left(NULL), right(NULL) {}
};

//�����ͨ����
void ArrayPrint(int arr[], int count);

//���������vector<int>
vector<int> IntVectorCreate(int count, ...);
void IntVectorPrint(const vector<int> &vec);

//���vector< vector<int> >
void IntVector2DPrint(const vector< vector<int> > &vec);

//���������vector<string>����������������Ϊconst char*
vector<string> StringVectorCreate(int count, ...);
void StringVectorPrint(const vector<string> &vec);

//���������٣��������
ListNode *ListCreate(int count, ...);
void DestroyList(ListNode *head);
void ListPrint(ListNode *head);

//���������٣����������
TreeNode *TreeCreate(int count, ...);
void DestroyTree(TreeNode *root);
void TreePrint(TreeNode *root);

#endif
