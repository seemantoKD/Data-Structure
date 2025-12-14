#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<long long> v(n);
    vector<long long> pre(n);
    for (long long i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    pre[0] = v[0];

    for (long long i = 1; i < v.size(); i++)
    {
        pre[i] = pre[i - 1] + v[i];
    }

    reverse(pre.begin(), pre.end());
    for (long long val : pre)
    {
        cout << val << " ";
    }
    return 0;
}