#include <bits/stdc++.h>
using namespace std;
int main()
{
    // case -> 1: max pq
    priority_queue<int> pq;
    pq.push(10);
    pq.push(20);
    pq.push(30);

    cout << pq.top() << endl;
    pq.push(100);
    cout << pq.top() << endl;

    pq.pop(); // 100 pop
    pq.pop(); // 30 pop
    cout << pq.top() << endl;

    /*
    // case -> 2: min pq
    priority_queue<int, vector<int>, greater<int>> pq; // min pq declare
    pq.push(10);
    pq.push(20);
    pq.push(30);

    cout << pq.top() << endl;
    pq.push(5);
    cout << pq.top() << endl;

    pq.pop(); // 5 pop
    pq.pop(); // 10 pop
    cout << pq.top() << endl;
    */
    return 0;
}