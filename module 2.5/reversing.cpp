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

    vector<int> v2(n);
    for (int i = 0; i < n; i++)
    {
        v2[i] = v[n - 1 - i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << v2[i] << " ";
    }
    return 0;
}