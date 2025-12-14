#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    int n;
    cin >> n;

    while (n--)
    {
        int val;
        cin >> val;
        s.insert(val);
    }

    // set printing
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    //usses of s.count() function
    if(s.count(4))
    {
        cout<<"Ache\n";
    }

    else 
    {
        cout<<"Nai\n";
    }
    return 0;
}