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

void levelorder(Node *root)
{
    if (root == NULL)
    {
        cout << "Tree is empty\n";
        return;
    }

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        cout << p->val << " ";

        if (p->left)
        {
            q.push(p->left);
        }

        if (p->right)
        {
            q.push(p->right);
        }
    }
}

Node *convert_array_to_bst(int arr[], int size, int l, int r)
{
    if (l > r)
    {
        return NULL;
    }

    int mid = (l + r) / 2;
    Node *root = new Node(arr[mid]);
    Node *left_root = convert_array_to_bst(arr, size, l, mid - 1);
    Node *right_root = convert_array_to_bst(arr, size, mid + 1, r);
    root->left = left_root;
    root->right = right_root;
    return root;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    Node *root = convert_array_to_bst(arr, n, 0, n - 1);
    levelorder(root);
    return 0;
}