#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);

    if (!q.empty())
    {
        q.pop();
    }

    if (!q.empty())
    {
        cout << q.front() << endl;
    }

    cout << q.back() << endl;
    cout << q.size() << endl;
    cout << q.empty() << endl; // 0 -> false/no &&& 1 -> true/yes
    return 0;
}