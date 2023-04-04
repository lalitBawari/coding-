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
    //  brute approch        t.c-0(n^2)
    // int max_pro = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     int pro = 1;
    //     for (int j = i; j < n; j++)
    //     {
    //         pro *= arr[j];
    //         max_pro = max(max_pro, pro);
    //     }
    // }
    // cout << max_pro;

    //  optimal approch            t.c-0(n)   s.c- 0(1)

    int max_el = arr[0], min_el = arr[0], ans = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < 0)
        {
            swap(max_el, min_el);
        }
        max_el = max(arr[i], max_el * arr[i]);
        min_el = min(arr[i], min_el * arr[i]);

        ans = max(ans, max_el);
    }
    cout << ans;
}