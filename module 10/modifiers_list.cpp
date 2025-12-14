#include <bits/stdc++.h>
using namespace std;
int main()
{
    /*
    //usses of = and list.assign function
    list<int> l = {1, 2, 3, 4, 5};
    list<int> l2;
    // l2 = l;
    l2.assign(l.begin(), l.end());
    for (int val : l)
    {
        cout << val << endl;
    }
    */

    /*
    //usses of push_back and push_front function
    list<int> l = {10, 20};
    // l.push_back(200); // usses of push_back() function
    l.push_front(200); // usses of push_front() function
    for (int val : l)
    {
        cout << val << endl;
    }
    */

    /*
    // usses of pop_back and pop_front function
    list<int> l = {10, 20};
    // l.pop_back(); // usses of pop_back() function
    l.pop_front(); // usses of pop_front() function
    for (int val : l)
    {
        cout << val << endl;
    }
    */

    /*
    // usses of ith element access function
    list<int> l = {1, 2, 3, 4, 5};
    // cout << *next(l.begin(), 2)<<endl;
    //  usses of insert function
    l.insert(next(l.begin(), 2), 100); // for single value insertion
    //list<int> l2 = {100, 200, 300};
    //l.insert(next(l.begin(), 2), l2.begin(), l2.end()); // for multiple value insertion
    for (int val : l)
    {
        cout << val << endl;
    }

    // usses of erase function
    l.erase(next(l.begin(), 2));
    for (int val : l)
    {
        cout << val << endl;
    }
    */

    /*
    // usses of replace function
    list<int> l(10, 200);
    replace(l.begin(), l.end(), 200, 20);
    for (int val : l)
    {
        cout << val << endl;
    }
    */

    /*
    //usses of find function
    list<int>l(5,10);
    auto it = find(l.begin(),l.end(),10);

    if(it == l.end())
    {
        cout<<"Not found\n";
    }

    else
    {
        cout<<"Found\n";
    }
    */
    return 0;
}