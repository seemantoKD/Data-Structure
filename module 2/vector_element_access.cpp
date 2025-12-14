#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5};

    // usses of v[i]
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
    cout << endl
         << endl;

    // usses of v.at(i)
    cout << v.at(3) << endl
         << endl;

    // usses of v.back()->last element ber kore
    cout << v.back() << endl
         << endl;

    // //another way to acces last index
    // cout<<v[v.size()-1]<<endl;

    // usses of v.front()->first element ber kore
    cout << v.front() << endl
         << endl;

    // // another way to access first element
    // cout << v[0] << endl;
}