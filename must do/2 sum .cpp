#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // brute                         t.c= 0(n^2)
    // for (int i = 0; i < n; i++)
    // {
    //     int sum = 0;
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         sum = arr[i] + arr[j];
    //         if (sum == k)
    //         {
    //             cout << i << "," << j;
    //             return 0;
    //         }
    //     }
    // }
    // cout << "not";

    //  semi optimal approch      t.c-0(nlogn)  s.c-0(1)
    // sort(arr, arr + n);
    // int sum = 0;
    // int i = 0, j = n;
    // while (i < j)
    // {
    //     sum = arr[i] + arr[j];
    //     if (sum == k)
    //     {
    //         cout << "yes";
    //         return 0;
    //     }
    //     else if (sum > k)
    //     {
    //         j--;
    //     }
    //     else
    //     {
    //         i++;
    //     }
    // }
    // cout << "no";

    // optimal approch     t.c-0(n)  s.c-0(n)
    unordered_map<int, int> m;
    for (auto it : arr)
    {
        m[it]++;
    }
    for (int i = 0; i < n; i++)
    {
        int x = k - arr[i];
        if (m.find(x) != m.end())
        {
            cout << "yes";
            return 0;
        }
    }
    cout << "no";
}