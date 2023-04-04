#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int arr1[n], arr2[m];
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }
    set<int> set;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        set.insert(arr1[i]);
    }
    for (int i = 0; i < m; i++)
    {
        if (set.find(arr2[i]) != set.end())
        {
            count++;
            set.erase(arr2[i]);
        }
    }
    cout << count;
}