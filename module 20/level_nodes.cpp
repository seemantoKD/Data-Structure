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
        Node *p = q.front();
        q.pop();

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

        p->left = myleft;
        p->right = myright;

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

int level(Node *root)
{
    if (root == NULL)
    {
        return -1;
    }

    int l = level(root->left);
    int r = level(root->right);
    return 1 + max(l, r);
}

void print_level(Node *root, int level)
{
    if (root == NULL)
    {
        return;
    }

    if (level == 0)
    {
        cout << root->val << " ";
    }

    else
    {
        print_level(root->left, level - 1);
        print_level(root->right, level - 1);
    }
}

int main()
{
    Node *root = binary_tree_input();
    int max_level = level(root);
    int x;
    cin >> x;

    if (x < 0 || x > max_level)
    {
        cout << "Invalid\n";
    }

    else
    {
        print_level(root, x);
    }

    return 0;
}