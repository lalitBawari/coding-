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
    // move zeroes at end         semi optimal approch   t.c-(0(n)) s.c-0(n)
    // vector<int> v;
    // int x = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] == 0)
    //     {
    //         x++;
    //     }
    //     else
    //     {
    //         v.push_back(arr[i]);
    //     }
    // }
    // while (x--)
    // {
    //     v.push_back(0);
    // }

    // move zeroes at end      best approch    t.c(0(n))   s.c-0(1)

    // int j = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] != 0)
    //     {
    //         arr[j] = arr[i];
    //         j++;
    //     }
    // }
    // for (int i = j; i < n; i++)
    // {
    //     arr[i] = 0;
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // move zeroes at front        semi optimal approch   t.c-(0(n)) s.c-0(n)

    // vector<int> v;
    // int x = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] == 0)
    //     {
    //         x++;
    //     }
    //     else
    //     {
    //         v.push_back(arr[i]);
    //     }
    // }
    // while (x--)
    // {
    //     v.insert(v.begin(), 0);
    // }

    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }

    // move zeroes at front         best approch    t.c(0(n))   s.c-0(1)
    int j = n - 1;
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] != 0)
        {
            arr[j] = arr[i];
            j--;
        }
    }
    for (int i = j; i >= 0; i--)
    {
        arr[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}