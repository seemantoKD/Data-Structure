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

// insert head node
void insert_at_head(Node *&head, int val)
{
    Node *newNode = new Node(val); // create a new node
    newNode->next = head;          // connect new node
    head = newNode;                // transfer head to newNode
}

// insert at any node
void insert_at_any_position(Node *&head, int index, int val)
{
    Node *newNode = new Node(val); // creating a new node for inserting at index 2
    Node *temp = head;

    for (int i = 0; i < index - 1; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

// insert at tail node
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

// counting linked list size
int size_linked_list(Node *head)
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

// printing linked list
void print_linked_list(Node *head)
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

    int idx;
    while (cin >> idx >> val) // for queries
    {
        int size = size_linked_list(head);

        if (idx > size)
        {
            cout << "Invalid\n";
        }

        else if (idx == size)
        {
            insert_at_tail(head, tail, val);
            print_linked_list(head);
        }

        else if (idx == 0)
        {
            insert_at_head(head, val);
            print_linked_list(head);
        }

        else
        {
            insert_at_any_position(head, idx, val);
            print_linked_list(head);
        }
    }
}