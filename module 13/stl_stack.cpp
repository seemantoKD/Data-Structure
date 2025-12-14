#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;

    // stack input
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    { 
        int val;
        cin >> val;
        st.push(val);
    }

    //cout<<st.size()<<endl;

    // stack output
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
    return 0;
}