//tool.cpp
#include "tool.h"

void Print(int arr[], int count)
{
    for (int i = 0; i < count; i++)
        cout << arr[i] << " - ";
    cout << endl;
}

/////////////////////////////////////////////////////

void Print(const vector<int> &vec)
{
    for (size_t i = 0; i < vec.size(); i++)
        cout << vec[i] << " , ";
    cout << endl;
}

void Print(const vector< vector<int> > &vec)
{
    cout << "[" << endl;
    for (size_t i = 0; i < vec.size(); i++)
    {
        cout << " [";
        for (size_t j = 0; j < vec[i].size(); j++)
            cout << vec[i][j] << ", ";
        cout << "]" << endl;
    }
    cout << "]" << endl;
}

void Print(const vector<string> &vec)
{
    cout << "------------------------------------" << endl;
    for (size_t i = 0; i < vec.size(); i++)
        cout << vec[i] << "_" << endl;
    cout << "------------------------------------" << endl;
}

//////////////////////////////////////////////

TreeNode *TreeCreate(const vector<int> &vec)
{
	size_t count = vec.size();
    TreeNode **treeArr = new TreeNode*[count];
    for (size_t i = 0; i < count; i++)
    {
        if (INT_MAX == vec[i]) {
			treeArr[i] = NULL;
		} else {
            treeArr[i] = new TreeNode(vec[i]);
		}
	}

    size_t curr = 1;
    for (size_t i = 0; i<count; i++)
    {
        if( !treeArr[i] ) {
            continue;
		}
 
        if (curr < count) {
            treeArr[i]->left = treeArr[curr++];
		}
        if (curr < count) {
            treeArr[i]->right = treeArr[curr++];
		}
    }
    
    TreeNode *root = treeArr[0];
    delete[] treeArr;
    return root;
}


void SubTreePrint(TreeNode *node, int level)
{
    if ( !node )
        return;

    SubTreePrint(node->right, level + 1);
    for (int i = 0; i < level; i++) {
        cout << "    ";
	}
    cout << setw(4) << node->val << endl;
    SubTreePrint(node->left, level + 1);
}

void Print(TreeNode *root)
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

void Print(ListNode *head)
{
    ListNode *node = head;
    while (node)
    {
        cout << node->val << " -> ";
        node = node->next;
    }
    cout << endl;
}

ListNode *ListCreate(const vector<int> &vec)
{
	size_t count = vec.size();
    ListNode *head, *curr;

	if (count == 0) {
		return NULL;
	}
    head = new ListNode(vec[0]);
    curr = head;
    for (size_t i = 1; i < count; i++)
    {
        ListNode *temp = new ListNode(vec[i]);
        curr->next = temp;
        curr = temp;
    }
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