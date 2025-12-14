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
void insert_at_tail(Node *&head, int val)
{
    Node *newNode = new Node(val); // create new node

    Node *temp = head;
    if (temp == NULL)
    {
        head = newNode;
        return;
    }
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
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
    Node *head = NULL;

    // insert new node
    insert_at_tail(head, 40);

    // print after insertion linked list
    print_linked_list(head);
    return 0;
}