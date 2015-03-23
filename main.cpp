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
    ArrayPrint(arr, 5);
    cout << endl;

    cout << "vector:" << endl;
    vector<int> intVet = IntVectorCreate(5, 1, 2, 3, 4, 5);
    IntVectorPrint(intVet);
    cout << endl;

    cout << "2D vector:" << endl;
    vector< vector<int> > Int2DVec;
    Int2DVec.resize(3);
    Int2DVec[0] = IntVectorCreate(5, 11, 12, 13, 14, 15);
    Int2DVec[1] = IntVectorCreate(5, 21, 22, 23, 24, 25);
    Int2DVec[2] = IntVectorCreate(5, 31, 32, 33, 34, 35);
    IntVector2DPrint(Int2DVec);
    cout << endl;

    cout << "list:" << endl;
    ListNode *listHead = ListCreate(5, 1, 2, 3, 4, 5);
    ListPrint(listHead);
    DestroyList(listHead);
    cout << endl;

    cout << "tree:" << endl;
    //这里可能有点难理解，详情请见 readme.doc
    TreeNode *tree = TreeCreate(9, 1, 2, 3, INT_MAX, INT_MAX, 4, INT_MAX, INT_MAX, 5);
    TreePrint(tree);
    DestroyTree(tree);
    cout << endl;


    return 0;
}