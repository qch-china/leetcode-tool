//tool.cpp
#include "tool.h"

void ArrayPrint(int arr[], int count)
{
    for (int i = 0; i < count; i++) {
        cout << arr[i] << " - ";
    }
    cout << endl;
}

/////////////////////////////////////////////////////

void IntVectorPrint(const vector<int> &vec)
{
    for (size_t i = 0; i < vec.size(); i++) {
        cout << vec[i] << " , ";
    }
    cout << endl;
}

void IntVector2DPrint(const vector< vector<int> > &vec)
{
    cout << "[" << endl;
    for (size_t i = 0; i < vec.size(); i++)
    {
        cout << " [";
        for (size_t j = 0; j < vec[i].size(); j++) {
            cout << vec[i][j] << ", ";
        }
        cout << "]" << endl;
    }
    cout << "]" << endl;
}

void StringVectorPrint(const vector<string> &vec)
{
    cout << "------------------------------------" << endl;
    for (size_t i = 0; i < vec.size(); i++) {
        cout << vec[i] << "_" << endl;
    }
    cout << "------------------------------------" << endl;
}

//////////////////////////////////////////////////////////

vector<int> IntVectorCreate(int count, ...)
{
    vector<int> result;
    va_list argptr;
    va_start(argptr, count);
    
    for(int i=0; i<count; i++) 
    {
        int num = va_arg(argptr, int);
        result.push_back(num);
    }
    va_end(argptr);
    return result;
}

vector<string> StringVectorCreate(int count, ...)
{
    vector<string> result;
    va_list argptr;
    va_start(argptr, count);

    for (int i = 0; i < count; i++)
    {
        char *str = va_arg(argptr, char*);
        result.push_back(str);
    }
    va_end(argptr);
    return result;
}

//////////////////////////////////////////////

TreeNode *TreeCreate(int count, ...)
{
    va_list argptr;
    va_start(argptr, count);

    TreeNode **treeArr = new TreeNode*[count];
    for (int i = 0; i < count; i++)
    {
        int num = va_arg(argptr, int);
        if (INT_MAX == num)
            treeArr[i] = NULL;
        else
            treeArr[i] = new TreeNode(num);
    }

    int curr = 1;
    for (int i = 0; i<count; i++)
    {
        if( !treeArr[i] ) {
            continue;
        }
 
        if( curr < count ) {
            treeArr[i]->left = treeArr[curr++];
        }
        if (curr < count) {
            treeArr[i]->right = treeArr[curr++];
        }
    }
    
    va_end(argptr);
    TreeNode *root = treeArr[0];
    delete[] treeArr;
    return root;
}


void SubTreePrint(TreeNode *node, int level)
{
    if ( !node ) {
        return;
    }
    
    SubTreePrint(node->right, level + 1);
    for (int i = 0; i < level; i++) {
        printf("    ");
    }
    printf("%04d\n", node->val);
    SubTreePrint(node->left, level + 1);
}


void TreePrint(TreeNode *root)
{
    cout << "------------------------------------" << endl;
    SubTreePrint(root, 0);
    cout << "------------------------------------" << endl;
}

void DestroyTree(TreeNode *root)
{
    if (NULL == root) {
        return;
    }
    DestroyTree(root->left);
    DestroyTree(root->right);
    delete root;
}

///////////////////////////////////////////

void ListPrint(ListNode *head)
{
    ListNode *node = head;
    while (node)
    {
        cout << node->val << " -> ";
        node = node->next;
    }
    cout << endl;
}

ListNode *ListCreate(int count, ...)
{
    va_list argptr;
    va_start(argptr, count);

    ListNode *head, *curr;
    int num = va_arg(argptr, int);
    head = new ListNode(num);
    curr = head;
    for (int i = 1; i < count; i++)
    {
        num = va_arg(argptr, int);
        ListNode *temp = new ListNode(num);
        curr->next = temp;
        curr = temp;
    }
    va_end(argptr);
    return head;
}

void DestroyList(ListNode *head)
{
    ListNode *curr = head;
    ListNode *temp = NULL;
    while (curr != NULL)
    {
        temp = curr;
        curr = curr->next;
        delete temp;
    }
}

////////////////////////////////////////////