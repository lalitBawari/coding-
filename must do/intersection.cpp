#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    int arr1[n1], arr2[n2];
    for (int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }

    // optimal approch      t.c-0(n)    s.c-0(n)
    // when distinct element needed
    vector<int> v;
    // set<int> s;
    // for (auto it : arr1)
    // {
    //     s.insert(it);
    // }
    // for (int i = 0; i < n2; i++)
    // {
    //     if (s.find(arr2[i]) != s.end())
    //     {
    //         v.push_back(arr2[i]);
    //         s.erase(arr2[i]);
    //     }
    // }

    // when non distinct element needed
    unordered_map<int, int> m;
    for (auto it : arr1)
    {
        m[it]++;
    }
    for (int i = 0; i < n2; i++)
    {
        if (m.find(arr2[i]) != m.end())
        {
            v.push_back(arr2[i]);
            m[arr2[i]]--;
            if (m[arr2[i]] == 0)
            {
                m.erase(arr2[i]);
            }
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}