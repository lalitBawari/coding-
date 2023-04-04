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
    unordered_multimap<int, int> m; // it is a associative container in stl which store element in form of key values and mapped values but it stores duplicate values .
    for (int i = 0; i < n; i++)
    {
        m.insert({arr[i], i});
    }
    for (auto it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
}