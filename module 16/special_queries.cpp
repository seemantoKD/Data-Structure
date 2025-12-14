#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;

    queue<string> Q;

    for (int i = 0; i < q; i++)
    {
        int command;
        cin >> command;

        if (command == 0)
        {
            string name;
            cin >> name;
            Q.push(name);
        }
        else if (command == 1)
        {
            if (!Q.empty())
            {
                cout << Q.front() << "\n";
                Q.pop();
            }
            else
            {
                cout << "Invalid\n";
            }
        }
    }

    return 0;
}
