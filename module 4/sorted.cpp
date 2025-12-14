#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    int n;
    while (t--)
    {
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        vector<int> v2 = v;
        sort(v2.begin(), v2.end());
        if (v2 == v)
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