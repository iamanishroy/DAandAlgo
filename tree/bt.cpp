#include <iostream>
using namespace std;

class Node
{
public:
    Node left, right;
    int data;

    Node(int val)
    {
        data = val;
    }
};

Node createTree()
{
    cout << "Enter data : ";
    int val;
    cin >> val;

    if (val == -1)
    {
        return NULL;
    }
    Node *root = new Node(val);
    cout << "Enter data for Left Node of " << val << " : ";
    root->left = createTree();
    cout << "Enter data for Left Node of " << val << " : ";
    root->right = createTree();

    return *root;
}

int main()
{

    return 0;
}