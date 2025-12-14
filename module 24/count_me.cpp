#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();

    string s;
    while (t--)
    {
        getline(cin, s);
        stringstream ss(s);
        string word;

        map<string, int> mp;
        string maxw;
        int max_count = 0;

        while (ss >> word)
        {
            mp[word]++;
            if (mp[word] > max_count)
            {
                max_count = mp[word];
                maxw = word;
            }
        }

        cout << maxw << " " << max_count << endl;
    }
    return 0;
}


/*
learning : 
-> string er moddhe jar frequency age maximum hobe se shudhu print hobe
*/