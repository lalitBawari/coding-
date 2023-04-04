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
    // unordered_map<int, int> m; // it is a associative container of stl which store element in form of key values and mapped valued in random order and it hold unique values.
    // for (int i = 0; i < n; i++)
    // {
    //     m.insert({arr[i], i});
    // }
    // for (auto it = m.begin(); it != m.end(); it++)
    // {
    //     cout << it->first << " " << it->second << endl;
    // }

    // for (int i = 0; i < n; i++)      // to store frequency
    // {
    //     m[arr[i]]++;
    // }
    // for (auto it = m.begin(); it != m.end(); it++)
    // {
    //     cout << it->first << " " << it->second << endl;
    // }

    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        m.insert({arr[i], i});
    }
    for (auto it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
}