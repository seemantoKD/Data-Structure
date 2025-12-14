#include <bits/stdc++.h>
using namespace std;
int main()
{
    // declare
    pair<int, int> p;

    // create combination
    // p = make_pair(2, 3);
    // shortcurt which replace make_pair function
    p = {2, 3};

    // access first and second val
    cout << p.first << endl;
    cout << p.second << endl;

    // pair of vector
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);

    // input vector of pair
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }

    // output vector of pair
    for (int i = 0; i < n; i++)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }
    return 0;
}