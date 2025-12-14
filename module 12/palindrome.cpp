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

int is_palindrome(Node *&head, Node *&tail)
{
    int flag = 1;
    Node *temp1 = head;
    Node *temp2 = tail;
    while (temp1 != NULL)
    {
        if (temp1->val != temp2->val)
        {
            flag = 0;
            break;
        }
        temp1 = temp1->next;
        temp2 = temp2->prev;
    }
    return flag;
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
    int flag = is_palindrome(head, tail);
    if (flag == 1)
    {
        cout << "YES\n";
    }

    else
    {
        cout << "NO\n";
    }
    return 0;
}