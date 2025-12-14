#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> v(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    // finding prefix sum
    vector<long long> pre_sum(n + 1);
    pre_sum[1] = v[1];

    for (int i = 2; i <= n; i++)
    {
        pre_sum[i] = pre_sum[i - 1] + v[i];
    }

    while (q--)
    {
        int left;
        int right;

        cin >> left >> right;
        long long sum = 0;

        if (left == 1)
        {
            sum = pre_sum[right];
        }

        else
        {
            sum = pre_sum[right] - pre_sum[left - 1];
        }

        cout << sum << endl;
    }
}