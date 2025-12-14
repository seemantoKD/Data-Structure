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

void insert_at_tail_linked_list2(Node *&head2, Node *&tail2, int val)
{
    Node *newnode = new Node(val);
    if (head2 == NULL)
    {
        head2 = newnode;
        tail2 = newnode;
        return;
    }
    tail2->next = newnode;
    tail2 = newnode;
}

bool is_equal(Node *head, Node *head2)
{
    Node *temp1 = head;
    Node *temp2 = head2;

    while (temp1 != NULL && temp2 != NULL)
    {
        if (temp1->val != temp2->val)
        {
            return false;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }

    if (temp1 != NULL || temp2 != NULL)
    {
        return false;
    }
    return true;
}

void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }
}

void print_linked_list2(Node *head2)
{
    Node *temp = head2;
    while (temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }
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

    Node *head2 = NULL;
    Node *tail2 = NULL;

    while (1)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail_linked_list2(head2, tail2, val);
    }

    bool equal = is_equal(head, head2);
    if (equal == true)
    {
        cout << "YES\n";
    }

    else
    {
        cout << "NO\n";
    }
    return 0;
}