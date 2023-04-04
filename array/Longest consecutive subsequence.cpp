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

    // brute approch            t.c-0(nlogn )  s.c-0(n)

    // sort(arr, arr + n);
    // int max_count = 0;
    // int count = 1;
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i + 1] - arr[i] == 1)
    //     {
    //         count++;
    //     }
    //     else if (arr[i + 1] == arr[i])     // for edge case [if 1 1 2 ]  [count =3]
    //     {
    //         continue;
    //     }
    //     else
    //     {
    //         count = 1;
    //     }
    //     max_count = max(max_count, count);
    // }
    // cout << max_count;

    // optimal approch      t.c-0(n)    s.c=0(n)
    set<int> s;
    int max_count = 0;
    for (auto it : arr)
    {
        s.insert(it);
    }
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        int x = arr[i] - 1;
        if (s.find(x) != s.end())
        {
            continue;
        }
        else
        {
            int j = arr[i];
            while (s.find(j) != s.end())
            {
                count++;
                j++;
            }
            max_count = max(max_count, count);
        }
    }
    cout << max_count;
}