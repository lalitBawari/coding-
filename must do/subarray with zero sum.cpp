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
    // brute       t.c-0(n^2)

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            if (sum == 0)
            {
                count++;
            }
        }
    }
    cout << count;

    // optimal approch         t.c-0(n)     s.c-0(n)
    unordered_map<int, int> m;
    m[0] = 1;
    int sum = 0, count = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        int x = sum - 0;
        if (m.find(x) != m.end())
        {
            count += m[x];
        }
        m[sum]++;
    }
    cout << count;
}