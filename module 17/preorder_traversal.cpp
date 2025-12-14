#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void preorder(Node *root)
{
    /*
        steps :
        *. base case likha
        1. root er value print kora
        2. recursion ke root er left deya(root->left)
        3. recursion ke root er right deya(root->right)
    */

    if (root == NULL)
    {
        return;
    }
    cout << root->val << " "; // root
    preorder(root->left);     // left
    preorder(root->right);    // right
}

int main()
{
    // create node
    Node *root = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);

    // connection
    root->left = a;
    root->right = b;
    a->left = c;
    b->left = d;
    b->right = e;

    // preorder function call for printing
    preorder(root);
    return 0;
}