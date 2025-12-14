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
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        // step -> 1
        Node *f = q.front();
        q.pop();

        // step -> 2
        cout << f->val << " ";

        // step -> 3
        if (f->left != NULL)
        {
            q.push(f->left);
        }

        if (f->right != NULL)
        {
            q.push(f->right);
        }
    }
}

int main()
{
    // creating node
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

    // function call
    levelorder(root);
    return 0;
}

/*
step :
        1. ekti queue neya
        2. queue er modde root push kora

        3. while loop calanu
            -> loop condition : !q.empty()

            -> step-1 : # q.front ke f namer node e store kora
                        # q.pop() kora

            -> step-2 : f node er value print kora

            -> step-3 : node er children push kora queue e
                # children push korar age check korte hobe children ache ki na.
*/