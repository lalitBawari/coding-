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

    // 1 brute approch         0(n^3)

    // int count = 0;
    // vector<int> v;
    // for (int i = 0; i < n - 2; i++)
    // {
    //     for (int j = i + 1; j < n - 1; j++)
    //     {
    //         int sum = 0;
    //         for (int k = j + 1; k < n; k++)
    //         {
    //             sum = arr[i] + arr[j] + arr[k];
    //             if (sum == 0)
    //             {
    //                 count++;
    //             }
    //         }
    //     }
    // }
    // cout << count << endl;

    // optimal approch      0(n^2)
    int sum = 0;
    int count = 0;
    sort(arr, arr + n);
    for (int k = 0; k < n - 2; k++) // 0(n)
    {
        int i = k + 1, j = n - 1;
        while (i < j) // 0(n)        so 0(n * n) = 0(n^2)
        {
            sum = arr[i] + arr[j] + arr[k];
            if (sum == 0)
            {
                count++;
                i++;
            }
            else if (sum < 0)
            {
                i++;
            }
            else
            {
                j--;
            }
        }
    }
    cout << count;
}