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
    // unordered_multiset<int> m; // it is a associative container in stl which is similar as set but store duplicate values
    // for (int i = 0; i < n; i++)
    // {
    //     m.insert(arr[i]);
    // }
    // for (auto it = m.begin(); it != m.end(); it++)
    // {
    //     cout << *it << " ";
    // }

    multiset<int> m; // it is a associative cointer of stl which sis same as set but store dublicate values in ordered form
    for (int i = 0; i < n; i++)
    {
        m.insert(arr[i]);
    }
    for (auto it = m.begin(); it != m.end(); it++)
    {
        cout << *it << " ";
    }
}