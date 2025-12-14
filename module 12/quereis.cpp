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

int linked_list_size(Node *head)
{
    Node *temp = head;
    int sz = 0;
    while (temp != NULL)
    {
        sz++;
        temp = temp->next;
    }
    return sz;
}

void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->next = head;
    head->prev = newnode;
    head = newnode;
}

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
    newnode->prev = tail;
    tail = newnode;
}

void insert_at_any_position(Node *&head, Node *&tail, int index, int val)
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

void print_backward(Node *tail)
{
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int q;
    cin >> q;

    while (q--)
    {
        int ind, val;
        cin >> ind >> val;

        int size = linked_list_size(head);

        if (ind < 0 || ind > size)
        {
            cout << "Invalid" << endl;
            continue;
        }

        else if (ind == 0)
        {
            insert_at_head(head, tail, val);
        }

        else if (ind == size)
        {
            insert_at_tail(head, tail, val);
        }

        else
        {
            insert_at_any_position(head, tail, ind, val);
        }
        cout << "L -> ";
        print_forward(head);
        cout << "R -> ";
        print_backward(tail);
    }
    return 0;
}