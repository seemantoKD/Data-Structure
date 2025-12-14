#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<string> l;
    string str;

    while (1)
    {
        cin >> str;
        if (str == "end")
        {
            break;
        }
        l.push_back(str);
    }

    int q;
    cin >> q;

    auto present = l.begin();

    while (q--)
    {
        string input_str, address;
        cin >> input_str;

        if (input_str == "visit")
        {
            cin >> address;
            auto it = find(l.begin(), l.end(), address);

            if (it != l.end())
            {
                present = it;
                cout << *present << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (input_str == "next")
        {
            auto temp = present;
            temp++;

            if (temp != l.end())
            {
                present = temp;
                cout << *present << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (input_str == "prev")
        {
            if (present != l.begin())
            {
                present--;
                cout << *present << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
    }

    return 0;
}