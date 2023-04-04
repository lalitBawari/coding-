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
    } // t.c-0(n)
      // s.c-0(1)
    unordered_map<int, int> map;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        if (map.find(target - arr[i]) != map.end())
        {
            v.push_back(i);
            v.push_back(map[target - arr[i]]);
        }
        else
        {
            map.insert({arr[i], i});
        }
    }
    for (int i = 0; i < n - 1; i++)
    {
        cout << v[i] << " ";
    }
}