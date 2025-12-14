#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    Node *next;
    int val;

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

void remove_duplicate(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        Node *temp2 = temp;
        while (temp2->next != NULL)
        {
            if (temp2->next->val == temp->val)
            {
                Node *duplicate = temp2->next;
                temp2->next = temp2->next->next;
                delete duplicate;
            }

            else
            {
                temp2 = temp2->next;
            }
        }
        temp = temp->next;
    }
}

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
    remove_duplicate(head);
    print_linked_list(head);
}