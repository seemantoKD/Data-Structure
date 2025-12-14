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
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

int checking(Node *&head)
{
    bool visited[101] = {false};
    Node *temp = head;
    int flag = 1;
    while (temp != NULL)
    {
        if (visited[temp->val] == true)
        {
            flag = 0;
            break;
        }
        visited[temp->val] = true;
        temp = temp->next;
    }
    return flag;
}

int main()
{
    Node *tail = NULL;
    Node *head = NULL;

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

    int flag = checking(head);
    if (flag == 0)
    {
        cout << "YES\n";
    }

    else
    {
        cout << "NO\n";
    }
    return 0;
}