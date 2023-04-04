#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, target;
    cin >> n >> target;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] == (target - arr[i]))
            {
                v.push_back(i);
                v.push_back(j);
            }
        }
    }
    for (int i = 0; i <= n - 2; i++)
    {
        cout << v[i] << " ";
    }
}