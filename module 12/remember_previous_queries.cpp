#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l;

    int q;
    cin >> q;

    int x, v;
    while (q--)
    {
        cin >> x >> v;

        if (x == 0)
        {
            l.push_front(v);
        }

        else if (x == 1)
        {
            l.push_back(v);
        }

        else
        {
            if (v >= 0 && static_cast<size_t>(v) < l.size())
            {
                l.erase(next(l.begin(), v));
            }
        }

        // Print left to right
        cout << "L -> ";
        for (int val : l)
        {
            cout << val << " ";
        }
        cout << endl;

        // Print right to left using reversed copy
        list<int> temp = l;
        temp.reverse();
        cout << "R -> ";
        for (int val : temp)
        {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
