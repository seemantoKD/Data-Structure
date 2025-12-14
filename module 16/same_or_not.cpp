#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;

    stack<int> st;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        st.push(x);
    }

    queue<int> q;
    int y;
    for (int i = 0; i < m; i++)
    {
        cin >> y;
        q.push(y);
    }

    // case->1 n != m
    if (n != m)
    {
        cout << "NO\n";
        return 0;
    }

    else
    {
        bool flag = true;
        for (int i = 0; i < n; i++)
        {

            if (st.top() != q.front())
            {
                flag = false;
                break;
            }
            st.pop();
            q.pop();
        }

        if (flag)
        {
            cout << "YES\n";
        }

        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}