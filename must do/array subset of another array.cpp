#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    int arr1[n1];
    for (int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }
    int arr2[n2];
    for (int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }
    // brute approch     t.c-0(n^2)
    // int count = 0;
    // for (int i = 0; i < n1; i++)
    // {
    //     for (int j = 0; j < n2; j++)
    //     {
    //         if (arr1[i] == arr2[j])
    //         {
    //             count++;
    //             arr1[i] = -1;
    //             arr2[j] = -2;
    //         }
    //     }
    // }
    // if (count == n2)
    // {
    //     cout << "yes";
    // }
    // else
    // {
    //     cout << "no";
    // }

    // optimal approch    t.c-0(n)  s.c-0(n)
    unordered_map<int, int> m1;
    for (auto it : arr2)
    {
        m1[it]++;
    }
    for (int i = 0; i < n1; i++)
    {
        if (m1.find(arr1[i]) != m1.end())
        {
            m1[arr1[i]]--;
            if (m1[arr1[i]] == 0)
            {
                m1.erase(arr1[i]);
            }
        }
    }
    if (m1.size() == 0)
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
}