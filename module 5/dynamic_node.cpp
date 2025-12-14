#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

int main()
{
    Node *head = new Node(10); // dynamic node declare
    Node *a = new Node(20);
    Node *b = new Node(30);

    // connection
    head->next = a;
    a->next = b;

    // value print
    cout << head->val << endl;
    cout << head->next->val << endl;
    cout << head->next->next->val << endl;
    return 0;
}