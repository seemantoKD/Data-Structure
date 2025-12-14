#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    string s;
    while (t--)
    {
        cin >> s;
        stack<char> st;

        for (int i = 0; i < s.size(); i++)
        {
            char c = s[i];
            if (!st.empty() && st.top() != c)
            {
                st.pop();
            }

            else
            {
                st.push(c);
            }
        }

        if (st.empty())
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