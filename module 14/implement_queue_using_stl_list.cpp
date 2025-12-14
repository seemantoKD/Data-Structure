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

class myQueue
{
public:
    list<int> l;
    void push(int val) // o(1)
    {
        l.push_back(val);
    }

    void pop() // o(1)
    {
        l.pop_front();
    }

    int front()
    {
        return l.front();
    }

    int back()
    {
        return l.back();
    }

    int size()
    {
        return l.size();
    }

    bool empty()
    {
        return l.empty();
    }
}; 

int main()
{
    myQueue q;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}