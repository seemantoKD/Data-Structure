#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore(); // newlilne print na howar jonnno
    vector<string> v(n);

    // input
    for (int i = 0; i < n; i++)
    {
        getline(cin, v[i]);
    }

    // output
    for (string s : v)
    {
        cout << s << endl;
    }
    return 0;
}