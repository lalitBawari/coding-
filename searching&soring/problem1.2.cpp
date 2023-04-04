#include <bits/stdc++.h>
using namespace std;
// for first occurance
int solution1(int arr[], int n, int x)
{
  int low = 0;
  int high = n - 1;
  int result = -1;
  while (low <= high)
  {
    int mid = (low + high) / 2;
    if (arr[mid] == x)
    {
      result = mid;
      high = mid - 1;
    }
    else if (arr[mid] > x)
    {
      high = mid - 1;
    }
    else
    {
      low = mid + 1;
    }
  }
  cout << result << " ";
}
// for last occurance
int solution2(int arr[], int n, int x)
{
  int low = 0;
  int high = n - 1;
  int result = -1;
  while (low <= high)
  {
    int mid = (low + high) / 2;
    if (arr[mid] == x)
    {
      result = mid;
      low = mid + 1;
    }
    else if (arr[mid] > x)
    {
      high = mid - 1;
    }
    else
    {
      low = mid + 1;
    }
  }
  cout << result;
}
int main()
{
  int n, x;
  cin >> n >> x;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  solution1(arr, n, x);
  solution2(arr, n, x);
}