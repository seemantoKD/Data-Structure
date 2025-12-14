#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    Node *prev;
    int val;
    Node *next;

    Node(int val)
    {
        this->prev = NULL;
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_any_position(Node *head, int index, int val)
{
    Node *newnode = new Node(val);
    Node *temp = head;

    for (int i = 0; i < index - 1; i++)
    {
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next->prev = newnode;
    temp->next = newnode;
    newnode->prev = temp;
}

void print_forward(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);

    // connection
    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;

    insert_at_any_position(head, 2, 40);
    insert_at_any_position(head, 1, 50);
    print_forward(head);

    return 0;
}