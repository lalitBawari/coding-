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
    // if (n == 1)
    // {
    //     cout << arr[0];
    //     return 0;
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     if (i == 0)
    //     {
    //         if (arr[i + 1] < arr[i])
    //         {
    //             cout << arr[i];
    //             return 0;
    //         }
    //     }
    //     else if (i == n - 1)
    //     {
    //         if (arr[i] > arr[i - 1])
    //         {
    //             cout << arr[i];
    //             return 0;
    //         }
    //     }
    //     else
    //     {
    //         if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
    //         {
    //             cout << arr[i];
    //             return 0;
    //         }
    //     }
    // }

    // optimal approch
    if (n == 1)
    {
        cout << arr[0];
        return 0;
    }
    int start = 0, end = n - 1;
    if (arr[start] > arr[start + 1])
    {
        cout << start;
        return 0;
    }
    if (arr[end] > arr[end - 1])
    {
        cout << end;
        return 0;
    }
    while (start < end)
    {
        int mid = (start + end) / 2;
        if ((arr[mid] == n - 1 and arr[mid] > arr[mid - 1]) or
            (arr[mid] == 0 and arr[mid] > arr[mid + 1]) or
            (arr[mid] > arr[mid + 1] and arr[mid] > arr[mid - 1]))
        {
            cout << mid;
            return 0;
        }
        else if (arr[mid + 1] > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
}