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

Node *binary_tree_input()
{
    int val;
    cin >> val;
    Node *root;

    // create node using val
    if (val == -1)
    {
        root = NULL;
    }

    else
    {
        root = new Node(val);
    }

    queue<Node *> q;
    if (root != NULL)
    {
        q.push(root);
    }

    while (!q.empty())
    {
        // step -> 1
        Node *p = q.front();
        q.pop();

        // step->2
        int l, r;
        cin >> l >> r;
        Node *myleft, *myright;

        if (l == -1)
        {
            myleft = NULL;
        }

        else
        {
            myleft = new Node(l);
        }

        if (r == -1)
        {
            myright = NULL;
        }

        else
        {
            myright = new Node(r);
        }

        // connection
        p->left = myleft;
        p->right = myright;

        // step->3
        if (p->left != NULL)
        {
            q.push(p->left);
        }

        if (p->right != NULL)
        {
            q.push(p->right);
        }
    }
    return root;
}

bool search_in_bst(Node *root, int val)
{
    if (root == NULL)
    {
        return false;
    }

    if (root->val == val)
    {
        return true;
    }

    if (root->val > val)
    {
        return search_in_bst(root->left, val);
    }

    else
    {
        return search_in_bst(root->right, val);
    }
}

int main()
{
    Node *root = binary_tree_input();
    int target;
    cin >> target;
    bool flag = search_in_bst(root, target);

    if (flag)
    {
        cout << "Found\n";
    }

    else
    {
        cout << "Not found\n";
    }
    return 0;
}