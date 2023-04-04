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
    //  brute approch       t.c-0(n^2)
    //  int count = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         int x = k - arr[i];
    //         if (arr[j] == x)
    //         {
    //             count++;
    //         }
    //     }
    // }
    // cout << count;

    // optimal approch     t.c-0(n)    s.c-0(n)
    unordered_map<int, int> m;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int x = k - arr[i];
        if (m.find(x) != m.end())
        {
            count += m[x];
        }
        m[arr[i]]++;
    }
    cout << count;
}