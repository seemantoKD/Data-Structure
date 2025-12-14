#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    int val;
    cin >> val;
    int flag = 0;

    int left = 0;
    int right = n - 1;

    // in binary search
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
            right = mid - 1; // mid boro hoile right mid er ceye ek kom hobe
        }

        else // arr[mid] < val
        {
            left = mid + 1;
        }
    }

    if (flag == 1)
    {
        cout << "Found\n";
    }

    else
    {
        cout << "Not found\n";
    }
    return 0;
}