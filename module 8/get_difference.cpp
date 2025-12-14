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

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}

void difference(Node *head)
{
    if (head == NULL)
    {
        return;
    }
    int mn = head->val;
    int mx = head->val;

    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->val > mx)
        {
            mx = temp->val;
        }

        if (temp->val < mn)
        {
            mn = temp->val;
        }
        temp = temp->next;
    }

    int result = mx - mn;
    cout << result << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;

    while (1)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }
    difference(head);
    return 0;
}