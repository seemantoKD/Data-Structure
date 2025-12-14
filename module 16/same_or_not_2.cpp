#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> st;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        st.push_back(val);
    }

    vector<int> q;
    for (int i = 0; i < m; i++)
    {
        int val;
        cin >> val;
        q.push_back(val);
    }

    if (st.size() != q.size())
    {
        cout << "NO" << endl;
        return 0;
    }

    bool same = true;

    while (!st.empty() && !q.empty())
    {
        int stack_top = st.back();
        int queue_front = q.front();

        if (stack_top != queue_front)
        {
            same = false;
            break;
        }

        st.pop_back();
        q.erase(q.begin());
    }

    if (same && st.empty() && q.empty())
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
