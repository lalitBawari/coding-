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
    //  brute approch      t.c-0(nlogn )
    // sort(arr, arr + n);
    // int x = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     x++;
    //     if (arr[i] == x)
    //     {
    //         continue;
    //     }
    //     else
    //     {
    //         cout << x;
    //         return 0;
    //     }
    // }

    // semi optimal approch      t.c-0(n)   s.c-0(n)
    // set<int> s;
    // for (auto it : arr)
    // {
    //     s.insert(it);
    // }
    // for (int i = 1; i <= n; i++)
    // {
    //     if (s.find(i) != s.end())
    //     {
    //         continue;
    //     }
    //     else
    //     {
    //         cout << i;
    //         return 0;
    //     }
    // }

    // best approch     t.c-0(n)    s.c-0(1)
    int totalsum = (n * (n + 1)) / 2;
    int arrsum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        arrsum += arr[i];
    }
    int x = totalsum - arrsum;
    cout << x;
}