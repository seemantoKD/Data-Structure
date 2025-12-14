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

void leaf(Node *root, vector<int> &leaf_node)
{
    if (root == NULL)
    {
        return;
    }

    if (root->left == NULL && root->right == NULL)
    {
        leaf_node.push_back(root->val);
        return;
    }

    leaf(root->left, leaf_node);
    leaf(root->right, leaf_node);
}

int main()
{
    Node *root = binary_tree_input();
    vector<int> leaf_node;
    leaf(root, leaf_node);
    sort(leaf_node.begin(), leaf_node.end());
    reverse(leaf_node.begin(), leaf_node.end());

    for (int val : leaf_node)
    {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}