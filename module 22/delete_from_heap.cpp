#include <bits/stdc++.h>
using namespace std;

void insert_heap(vector<int> &v, int val)
{
    v.push_back(val);
    int current_index = v.size() - 1;
    while (current_index != 0)
    {
        int par_index = (current_index - 1) / 2;
        if (v[par_index] < v[current_index])
        {
            swap(v[current_index], v[par_index]);
        }

        else
        {
            break;
        }
        current_index = par_index;
    }
}

void print_heap(vector<int> v)
{
    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;
}

void delete_heap(vector<int> &v)
{
    cout << v[0] << "deleted -> ";
    v[0] = v.back();
    v.pop_back();

    // check max heap condition
    int current_index = 0;
    while (true)
    {
        int left_index = current_index * 2 + 1;
        int right_index = current_index * 2 + 2;

        int left_val = INT_MIN, right_val = INT_MIN;

        if (left_index < v.size())
        {
            left_val = v[left_index];
        }

        if (right_index < v.size())
        {
            right_val = v[right_index];
        }

        // swapping
        if (left_val > right_val && left_val > v[current_index])
        {
            swap(v[left_index], v[current_index]);
            current_index = left_index;
        }

        else if (right_val > left_val && right_val > v[current_index])
        {
            swap(v[right_index], v[current_index]);
            current_index = right_index;
        }

        else
        {
            break;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        insert_heap(v, val);
    }

    print_heap(v);
    delete_heap(v);
    print_heap(v);

    delete_heap(v);
    print_heap(v);

    delete_heap(v);
    print_heap(v);

    delete_heap(v);
    print_heap(v); 
    return 0;
}