#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    // // brute approch      t.c-0(n^2)
    // int max_l = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     int zero_count = 0, one_count = 0;
    //     for (int j = i; j < n; j++)
    //     {
    //         if (arr[j] == 0)
    //         {
    //             zero_count++;
    //         }
    //         else
    //         {
    //             one_count++;
    //         }
    //         if (zero_count == one_count)
    //         {
    //             max_l = max(max_l, j - i + 1);
    //         }
    //     }
    // }
    // cout << max_l;

    // optimal approch       t.c-0(n)     s.c-0(n)
    unordered_map<int, int> m;
    m[0] = -1;
    int x = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (av[i] == 0)
        {
            x--;
        }
        else
        {
            x++;
        }
        if (m.find(x) != m.end())
        {
            ans = max(ans, i - m[x]);
        }
        else
        {
            m.insert({x, i});
        }
    }
    cout << ans;
}
