#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
    list<int> l;

    void push(int val)
    {
        l.push_back(val);
    }

    void pop()
    {
        l.pop_back();
    }

    int top()
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
    myStack st;
    st.push(10);
    st.push(20);
    st.push(30);

    // pop and top er jonno empty condition test korte hoy
    if (st.empty() == false)
    {
        st.pop();
    }
    // st.pop();
    if (!st.empty())
    {
        cout << st.top() << endl;
    }
    return 0;
}