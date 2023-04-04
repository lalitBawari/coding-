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
    // brute approch       t.c-0(nlogn)
    // sort(arr, arr + n);
    // cout << arr[0] << " " << arr[n - 1];

    // optimal approch    t.c-0(n)   s.c-0(1)
    int max_el = arr[0], min_el = arr[0];
    for (int i = 0; i < n; i++)
    {
        max_el = max(max_el, arr[i]);
        min_el = min(min_el, arr[i]);
    }
    cout << min_el << " " << max_el;
}