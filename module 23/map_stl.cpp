#include <bits/stdc++.h>
using namespace std;
int main()
{
    // declare of map
    // map<key,val>mp;
    map<string, int> mp;

    // syntax : map_Name [key] = val
    mp["Tamim"] = 2; // tamim er val 2
    mp["Ramim"] = 5;
    mp["Samim"] = 50;

    // printing map
    //  cout<<mp["Hamim"]<<endl;

    // printing full map
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << " " << it->second << endl; // first -> key , second -> val
    }

    // map a kuno ekti val ache ki na nai ta count function diye jana jay
    if (mp.count("Hamim"))
    {
        cout << "ache\n";
    }

    else
    {
        cout << "NAI\n";
    }
    return 0;
}