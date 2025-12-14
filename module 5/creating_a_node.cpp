#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
};

int main()
{
    // node declare
    Node a, b, c;

    // value initialize
    a.val = 10;
    b.val = 20;
    c.val = 30;

    // node address
    a.next = &b;
    b.next = &c;
    c.next = NULL;

    // printing node value
    cout << a.val << endl;
    // cout << (*a.next).val << endl;
    // uporer comment er shortcurt
    cout << a.next->val << endl; // print value of b node
    cout << a.next->next->val << endl; // print value of c node
    return 0;
}