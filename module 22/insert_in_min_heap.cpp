#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    // input heap
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int val;
    cin >> val; // insert korbo jeta

    v.push_back(val);
    int current_index = v.size() - 1; // last index

    while (current_index != 0)
    {
        // find parent index of inserted val
        int par_index = (current_index - 1) / 2;

        if (v[par_index] > v[current_index])
        {
            swap(v[par_index], v[current_index]);
        }

        else
        {
            break;
        }
        current_index = par_index;
    }

    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}

/*
    step :
    1. vector/array input neya
    2. jei val heap e insert korbo seta input niye vector er shese push kore dibo
    3. inserted val er index janbo
    3.5 tar parent index ber korbo
    4. current index update korbo
    5. step 3.5 r step 4 ke loop e dukabo
*/