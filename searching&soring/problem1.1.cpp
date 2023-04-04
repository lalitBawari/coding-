#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, data;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> data;
    int first = -1, last = -1;
    first = lower_bound(arr, arr + n, data) - arr;    // find first occurance of element
    last = upper_bound(arr, arr + n, data) - arr - 1; // find last occurance of element
    cout << first << " " << last;
}