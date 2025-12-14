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
        q.push(root);

    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();
        int l, r;
        cin >> l >> r;
        Node *myleft, *myright;
        myleft = (l == -1) ? NULL : new Node(l);
        myright = (r == -1) ? NULL : new Node(r);
        p->left = myleft;
        p->right = myright;
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}

void outer_tree(Node *root)
{
    if (root == NULL)
        return;

    int mx = 1000;
    bool flag[2 * mx + 1] = {false};
    int result[2 * mx + 1];

    struct Item
    {
        Node *node;
        int distance;
    };

    queue<Item> q;
    q.push({root, 0});

    while (!q.empty())
    {
        Item curr = q.front();
        q.pop();

        int index = curr.distance + mx;

        if (!flag[index])
        {
            flag[index] = true;
            result[index] = curr.node->val;
        }

        if (curr.node->left)
            q.push({curr.node->left, curr.distance - 1});
        if (curr.node->right)
            q.push({curr.node->right, curr.distance + 1});
    }

    for (int i = 0; i <= 2 * mx; i++)
    {
        if (flag[i])
        {
            cout << result[i] << " ";
        }
    }
    cout << endl;
}

int main()
{
    Node *root = binary_tree_input();
    outer_tree(root);
    return 0;
}