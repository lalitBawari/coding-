#include <bits/stdc++.h>
using namespace std;
int merge(int arr[], int left, int right, int mid)
{
    int inv_count = 0;
    int n1 = mid - left + 1, n2 = right - mid;
    int left_arr[n1], right_arr[n2];
    for (int i = 0; i < n1; i++)
    {
        left_arr[i] = arr[left + i];
    }
    for (int i = 0; i < n2; i++)
    {
        right_arr[i] = arr[mid + i + 1];
    }
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2)
    {
        if (left_arr[i] <= right_arr[j])
        {
            arr[k++] = left_arr[i++];
        }
        else
        {
            arr[k++] = right_arr[j++];
            inv_count += (mid - i);
        }
    }

    while (i < n1)
    {
        arr[k++] = left_arr[i++];
    }
    while (j < n2)
    {
        arr[k++] = right_arr[j++];
    }
    return inv_count;
}
int merge_sort(int arr[], int left, int right)
{
    int inv_count = 0;
    if (left >= right)
    {
        return 0;
    }
    int mid = (left + right) / 2;
    inv_count += merge_sort(arr, left, mid);
    inv_count += merge_sort(arr, mid + 1, right);
    inv_count += merge(arr, left, right, mid);
    return inv_count;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = merge_sort(arr, 0, n);
    cout << ans;
}