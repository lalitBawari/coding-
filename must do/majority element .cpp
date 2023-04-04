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
    // brute approch      t.c-0(nlogn)  s.c-0(1)
    // sort(arr, arr + n);
    // int count = 1, x, y;
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] == arr[i + 1])
    //     {
    //         count++;
    //     }
    //     else
    //     {
    //         count = 1;
    //     }
    //     if (count > n / 2)
    //     {
    //         x = arr[i];
    //         y = count;
    //     }
    // }
    // cout << "majority element is : " << x << endl
    //      << "majority element count: " << y;

    // semi optimal approch      t.c-0(n)    s.c-0(n)
    // unordered_map<int, int> m;
    // for (auto it : arr)
    // {
    //     m[it]++;
    // }
    // int x, y;
    // for (auto i : m)
    // {
    //     if (i.second > n / 2)
    //     {
    //         x = i.first;
    //         y = i.second;
    //     }
    // }
    // cout << "majority element is : " << x << endl;
    // cout << "majority element count: " << y << endl;

    // optimal approch     t.c-0(n)   s.c-0(1)
    int maj_el = -1;
    if (n == 1)
    {
        maj_el = arr[0];
    }
    int j = 0, count = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[j] == arr[i])
        {
            count++;
        }
        else
        {
            count--;
        }
        if (count == 0)
        {
            j = i;
            count = 1;
        }
        if (count > 1)
        {
            maj_el = arr[j];
        }
    }
    cout << maj_el;
}