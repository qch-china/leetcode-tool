#include "tool.h"
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <stack>
#include <set>
#include <map>
#include <list>
#include <queue>
#include <deque>
#include <algorithm>
using namespace std;

/*
class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {

    }
};
*/


int main()
{
    cout << "array:" << endl;
    int arr[5] = { 1, 2, 3, 4, 5 };
    Print(arr, 5);
    cout << endl;

    cout << "int vector:" << endl;
    vector<int> intVet = {1, 2, 3, 4, 5};
    Print(intVet);
    cout << endl;
	
    cout << "2D vector:" << endl;
    vector< vector<int> > Int2DVec = {
        {11, 12, 13, 14, 15},
        {21, 22, 23, 24, 25},
        {31, 32, 33, 34, 35},
    };
    Print(Int2DVec);
    cout << endl;
	
	cout << "string vector:" << endl;
	vector<string> stringVec = {"AAA", "BBB", "CCC", "DDD"};
	Print(stringVec);
    cout << endl;
	
    cout << "list:" << endl;
	vector<int> listVet = {1, 2, 3, 4, 5};
    ListNode *listHead = ListCreate(listVet);
    Print(listHead);
    DestroyList(listHead);
    cout << endl;

    cout << "tree:" << endl;
    //这里可能有点难理解，详情请见 readme.doc
	vector<int> treeVec = {1, 2, 3, INT_MAX, INT_MAX, 4, INT_MAX, INT_MAX, 5};
    TreeNode *tree = TreeCreate(treeVec);
    Print(tree);
    DestroyTree(tree);
    cout << endl;


    return 0;
}