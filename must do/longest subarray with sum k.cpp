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
    //  brute     t.c-0(n^2)
    // int max_len = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     int sum = 0;
    //     for (int j = i; j < n; j++)
    //     {
    //         sum += arr[j];
    //         if (sum == k)
    //         {
    //             max_len = max(max_len, j - i + 1);
    //         }
    //     }
    // }
    // cout << max_len;

    //  optimal approch       t.c-0(n)    s.c-0(n)

    unordered_map<int, int> m;
    m[0] = -1;
    int sum = 0, max_len = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        int x = sum - k;
        if (m.find(x) != m.end())
        {
            max_len = max(max_len, i - m[x]);
        }
        m.insert({sum, i});
    }
    cout << max_len;
}