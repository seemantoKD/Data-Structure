#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    while (q--)
    {
        int val;
        cin >> val;

        int flag = 0;
        int left = 0;
        int right = n - 1;

        while (right >= left)
        {
            int mid = (left + right) / 2;

            if (arr[mid] == val)
            {
                flag = 1;
                break;
            }

            else if (arr[mid] > val)
            {
                right = mid - 1;
            }

            else
            {
                left = mid + 1;
            }
        }

        if (flag == 1)
        {
            cout << "found\n";
        }

        else
        {
            cout << "not found\n";
        }
    }
}