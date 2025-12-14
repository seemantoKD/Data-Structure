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
    // create node
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);

    // connection
    head->next = a;
    a->next = b;
    b->next = c;

    /*
    // print value of linked list unsmart way
    cout << head->val << endl;                   // head = 10
    cout << head->next->val << endl;             // a = 20
    cout << head->next->next->val << endl;       // b = 30
    cout << head->next->next->next->val << endl; // c = 40
    */

    // print value of linked list smart way
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }

    /*
    // again
    temp = head;
    while (temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }
        */

    return 0;
}