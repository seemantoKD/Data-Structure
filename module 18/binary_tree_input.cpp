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

    //create node using val
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

void levelorder_print(Node *root)
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
    Node *root = input_tree();
    levelorder_print(root);
    return 0;
}

/*
step :
        1. ekti value input neya
        2. input er prothom value diye ekti root node create kora
            *** age corner case ta handale kore nibo
        3. ekti queue neya
        4. queue er modde input er prothom value push kora jeta actually root
            *** push tokhon e kora jabe jokhon root != NULL

        5. while loop calanu
            -> loop condition : !q.empty()

            -> step-1 : # q.front ke p namer node e store kora
                        # q.pop() kora

            -> step-2 : p node ta ke niye kaj kora
                            # duita value (left,right) input
                            # left & right diye duita node create(myleft,myright) nam diye
                            # check korbo
                                (1) -> left == -1 hole myleft = NULL
                                    else -> myleft e notun node create korbo
                                            => myleft = new Node(left)

                                (2) -> right == -1 hole myright = NULL
                                    else -> myright e notun node create korbo
                                            => myright = new Node(right)

                                    -> etotuk chilo node bananu ekn connection dibo
                                            1. p->left = myleft;
                                            2. p->right = myright;

            -> step-3 : node er children push kora queue e
                # children push korar age check korte hobe children ache ki na.

        6. input tree function theke return root kore dibo r function er return type hobe Node*
*/
