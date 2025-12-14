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

class myStack
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

    void push(int val) // mainly-> insert at tail
    {
        sz++;
        Node *newnode = new Node(val);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
            return;
        }

        // connection
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
    }

    void pop() // mainly-> delete at tail
    {
        sz--;
        Node *deletenode = tail;
        tail = tail->prev;
        delete deletenode;
        if (tail == NULL)
        {
            head = NULL;
            return;
        }
        tail->next = NULL;
    }

    int top() // mainly -> tail
    {
        return tail->val;
    }

    int size()
    {
        return sz;
    }

    bool empty()
    {
        if (sz == 0)
        {
            return true;
        }

        else
        {
            return false;
        }
    }
};

int main()
{
    myStack st;
    int n;
    cin >> n;

    // stack input
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    // stack output
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}