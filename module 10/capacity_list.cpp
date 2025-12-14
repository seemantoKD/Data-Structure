#include <bits/stdc++.h>
using namespace std;
int main()
{
    /*
    list<int> l = {1, 2, 3, 4, 5};
    // usses of size function
    cout << l.size() << endl;
    */

    /*
    list<int> l = {1, 2, 3, 4, 5};
    // usses of max_size function
    cout << l.max_size() << endl;
    */

    /*
    list<int> l = {1, 2, 3, 4, 5};
    // usses of clear function
    l.clear();
    cout << l.size() << endl;
    for (int val : l)
    {
        cout << val << endl;
    }
    */

    /*
    list<int> l = {1, 2, 3, 4, 5};
    // usses of empty function
    l.clear();
    if (l.empty())
    {
        cout << "YES\n";
    }

    else
    {
        cout << "NO\n";
    }
    */

    list<int> l = {1, 2, 3, 4, 5};
    // usses of resize function
    l.resize(2);
    for (int val : l)
    {
        cout << val << endl;
    }
    return 0;
}