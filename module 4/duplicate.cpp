#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<int> distinct;
    for (int i = 0; i < v.size(); i++)
    {
        if (find(distinct.begin(), distinct.end(), v[i]) == distinct.end())
        {
            distinct.push_back(v[i]);
        }
    }

    if (distinct.size() == v.size())
    {
        cout << "NO\n";
    }

    else
    {
        cout << "YES\n";
    }
    return 0;
}