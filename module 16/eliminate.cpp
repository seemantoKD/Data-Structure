#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        stack<char> st;

        for (int i = 0; i < s.size(); i++)
        {
            char ch = s[i];

            if (ch == '1')
            {
                if (!st.empty() && st.top() == '0')
                {
                    st.pop();
                }

                else
                {
                    st.push(ch);
                }
            }

            else
            {
                st.push(ch);
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
