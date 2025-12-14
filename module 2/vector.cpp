#include <bits/stdc++.h>
using namespace std;
int main()
{
    // declaration of vector
    // vector<int> v; //type 1
    // cout << v.size() << endl;

    // vector declaration with size
    // vector<int> v(10); //type 2

    // vector<int> v(5, -1);  //type 3
    // vector<int> v2(v); //type 4

    // // vector element print
    // cout<<"v-> ";
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }
    // cout << endl;

    // cout<<"v2->";
    // for (int i = 0; i < v2.size(); i++)
    // {
    //     cout << v2[i] << " ";
    // }

    // int arr[5] = {1,2,3,4,5}; //type 5
    // vector<int> v(arr,arr+5);

    vector<int> v = {10, 20, 30, 40, 50}; //type 6

    // print vector
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}