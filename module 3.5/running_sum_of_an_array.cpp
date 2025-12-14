#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < v.size(); i++)
    {
        sum = sum + v[i];
        cout << sum << " ";
    }
    cout << endl;
    return 0;
}