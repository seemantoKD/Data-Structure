#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
    vector<int> v; // vector ta ke stack banabo orthat stack er 5 ta kaj chara ei vector ar kichu korte parbe na

    void push(int val)
    {
        v.push_back(val); // last e value add
    }

    void pop()
    {
        v.pop_back(); // last er value remove
    }

    int top()
    {
        return v.back();
    }

    int size()
    {
        return v.size();
    }

    bool empty()
    {
        return v.empty(); // if empty -> return true , otherwise return false
    }
};

int main()
{
    myStack st;
    st.push(10);
    st.push(20);
    st.push(30);
    if (!st.empty())
    {
        cout << st.top() << endl;
    }

    if (!st.empty())
    {
        st.pop();
    }

    if (!st.empty()) // shortcurt -> !st.empty()
    {
        cout << st.top() << endl;
    }
    return 0;
}