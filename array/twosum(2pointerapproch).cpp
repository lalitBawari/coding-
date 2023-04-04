#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, p;
    cin >> n >> p;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    } // t.c- 0(n logn)
      // s.c- 0(1)
    vector<int> v;
    sort(arr, arr + n);
    int i = 0;
    int j = n - 1;
    int sum = 0;
    while (i < j)
    {
        sum = arr[i] + arr[j];
        if (sum == p)
        {
            v.push_back(i);
            v.push_back(j);
        }
        if (sum < p)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    for (int i = 0; i < n - 1; i++)
    {
        cout << v[i] << " ";
    }
}