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

void insert_in_bst(Node *&root, int val)
{
    if (root == NULL)
    {
        root = new Node(val);
        return;
    }

    if (val < root->val)
    {
        if (root->left == NULL)
        {
            root->left = new Node(val);
        }

        else
        {
            insert_in_bst(root->left, val);
        }
    }

    else
    {
        if (root->right == NULL)
        {
            root->right = new Node(val);
        }

        else
        {
            insert_in_bst(root->right, val);
        }
    }
}

void levelorder(Node *root)
{
    if (root == NULL)
    {
        cout << "No tree" << endl;
        return;
    }
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();

        cout << f->val << " ";

        if (f->left)
        {
            q.push(f->left);
        }

        if (f->right)
        {
            q.push(f->right);
        }
    }
}

int main()
{
    Node *root = binary_tree_input();
    int insert_val;
    cin >> insert_val;
    insert_in_bst(root, insert_val);
    levelorder(root);
    return 0;
}