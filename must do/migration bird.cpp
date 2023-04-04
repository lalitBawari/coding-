#include <bits./stdc++.h>
using namespace std;
int migration_bird(int arr[], int n)
{
    int max_count = 0, max_el = 0;
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        m[arr[i]]++;
        if (m[arr[i]] > max_count)
        {
            max_count = m[arr[i]];
            max_el = arr[i];
        }
        else if (m[arr[i]] == max_el && arr[i] < max_el)
        {
            max_el = arr[i];
        }
    }
    return max_el;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << migration_bird(arr, n);
}