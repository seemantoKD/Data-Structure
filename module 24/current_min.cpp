#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    priority_queue<int, vector<int>, greater<int>> pq;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        pq.push(x);
    }

    int q;
    cin >> q;

    while (q--)
    {
        int input;
        cin >> input;

        if (input == 0)
        {
            int x;
            cin >> x;
            pq.push(x);
            if (!pq.empty())
                cout << pq.top() << endl;
            else
                cout << "Empty\n";
        }

        else if (input == 1)
        {
            if (!pq.empty())
                cout << pq.top() << endl;
            else
                cout << "Empty\n";
        }

        else
        {
            if (!pq.empty())
            {
                pq.pop();
                if (!pq.empty())
                    cout << pq.top() << endl;
                else
                    cout << "Empty\n";
            }

            else
            {
                cout << "Empty\n";
            }
        }
    }

    return 0;
}