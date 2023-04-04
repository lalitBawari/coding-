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
    //  brute approch     t.c-0(n^2)
    // int max_pro = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         max_pro = max(max_pro, arr[j] - arr[i]);
    //     }
    // }
    // cout << max_pro;

    //  optimal approch          t.c-0(n)
    int min_el = arr[0];
    int profit = 0;
    for (int i = 1; i < n; i++)
    {
        int x = arr[i] - min_el;
        profit = max(x, profit);
        min_el = min(min_el, arr[i]);
    }
    cout << profit;
}