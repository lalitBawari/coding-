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
    //  brute approch        t.c-0(nlogn)
    // sort(arr, arr + n);
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i + 1] == arr[i])
    //     {
    //         cout << arr[i];
    //         return 0;
    //     }
    // }

    // optimal approch     t.c-0(n)   s.c-0(n)
    unordered_map<int, int> m;
    for (auto it : arr)
    {
        m[it]++;
    }
    for (auto it : m)
    {
        if (it.second > 1)
        {
            cout << it.first;
            return 0;
        }
    }
}