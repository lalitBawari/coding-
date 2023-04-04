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
    unordered_map<int, int> m;
    for (auto it : arr)
    {
        m[it]++;
    }
    for (auto i : m)
    {
        if (i.second > n / 2)
        {
            cout << "yes";
            break;
        }
        else
        {
            cout << "no";
            break;
        }
    }
}