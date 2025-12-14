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

// insert new node
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val); // create new node

    if (head == NULL) // corner case
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = tail->next; // tail update same as head
    // tail = newNode; // eta dile ki update hobe na? ans->hobe
}

// printing linked list
void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }
}

int main()
{
    Node *head = new Node(10); // first node ta ke head dorlam
    Node *a = new Node(20);
    Node *tail = new Node(30); // last node ta ke tail dorlam

    head->next = a;
    a->next = tail;

    // insert new node
    insert_at_tail(head, tail, 40);
    insert_at_tail(head, tail, 50);
    insert_at_tail(head, tail, 60);

    // print after insertion linked list
    print_linked_list(head);
    cout << "Tail : " << tail->val << endl;
    return 0;
}