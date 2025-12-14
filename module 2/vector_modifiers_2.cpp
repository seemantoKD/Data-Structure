#include <bits/stdc++.h>
using namespace std;
int main()
{
    /*
    vector<int> v = {10,20,30,30,30,40,50,30};
    //before using replace

    for(int x : v)
    {
        cout<<x<<endl;
    }
    cout<<endl<<endl;
    //usses of replace
    replace(v.begin()+2,v.end(),30,100);

    //after using replace
    for(int x : v)
    {
        cout<<x<<endl;
    }
        */

    // usses of find function
    vector<int> v = {10, 20, 30, 30, 30, 40, 50, 30};

    auto it = find(v.begin(), v.end(), 30);

    // how to find a value in a vector using iterator
    // if (it == v.end())
    // {
    //     cout << "Not found\n";
    // }

    // else
    // {
    //     cout << "Found\n";
    // }

    //print iterator
    cout<<*it<<endl;
    return 0;
}