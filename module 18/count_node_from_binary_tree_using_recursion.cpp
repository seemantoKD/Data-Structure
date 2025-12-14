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

Node *input_tree()
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

int count_node(Node *root)
{
    if (root == NULL)
    {
        return 0; // root null -> node nai
    }

    int count_left_node = count_node(root->left);
    int count_right_node = count_node(root->right);
    int count = count_left_node + count_right_node + 1;
    return count;
}

int main()
{
    Node *root = input_tree();
    int count = count_node(root);
    cout << count << endl;
    return 0;
}