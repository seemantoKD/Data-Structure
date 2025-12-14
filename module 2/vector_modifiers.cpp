#include <bits/stdc++.h>
using namespace std;
int main()
{
    /*
    //assign v into the v2 vector

    vector<int> v = {1,2,3,4,5};
    vector<int> v2;
    v2 = v; //assign v into v2 vector
    //v2.assign(v.begin(), v.end());

    // for(int i = 0;i<v2.size();i++)
    // {
    //     cout<<v2[i]<<" ";
    // }

    //shortcut for loop
    for(int x : v2)
    {
        cout<<x<<" ";
    }
    */

    /*
    // usses of pop_back()
    vector<int> v = {10, 20, 30, 40, 50};
    //print vector before use pop_back()
    cout<<"before using pop_back() : \n";
    for (int x : v)
    {
        cout << x << endl;
    }

    cout<<"After using pop_back() : \n";
    v.pop_back();
    //print vector after using pop_back()
    for (int x : v)
    {
        cout << x << endl;
    }
        */

    

    /*
    // usees of insert function

    vector<int> v = {10, 20, 30, 40, 50};
    cout << "before using insert() : \n";
    for (int x : v)
    {
        cout << x << endl;
    }

    // using insert function
    v.insert(v.begin() + 2, 100); //single element insert

    
        // //multiple element insertion
        // vector<int> v2 = {300,350,500};
        // v.insert(V.begin()+2, v2.begin(),v2.end());
    


    cout << "after using insert() : \n";
    for (int x : v)
    {
        cout << x << endl;
    }
        */

    /*
    // usees of erase function

    vector<int> v = {10, 20, 30, 40, 50,60};
    cout << "before using erase() : \n";
    for (int x : v)
    {
        cout << x << endl;
    }

    // using erase function
    //v.erase(v.begin() + 2); //single element erase

    //multiple element erase(20,30,40,50)

    //syntax : v.erase(starting element , ending element (delete er prothom index))
    v.erase(v.begin()+1,v.end()-1);

    cout << "after using erase() : \n";
    for (int x : v)
    {
        cout << x << endl;
    }
    */
    
    return 0;
}