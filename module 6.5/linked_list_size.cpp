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

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    int count = 0;
    while (1)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        count++;
        insert_at_tail(head, tail, val);
    }
    cout << count << endl;

    return 0;
}