#include <bits/stdc++.h>
using namespace std;
int main()
{
    /*
    //case 1 ->vector declare with size
    int n; // array/vector er size
    cin >> n;
    vector<int> v(n);
    // vector input
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    // print vector
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
        */

    // case 2 ->vector declare without size
    int n;
    cin >> n;
    vector<int> v;
    // vector input
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    // print vector
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}