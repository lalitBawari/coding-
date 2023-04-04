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
    priority_queue<int> p; // it is a container which is design in sach way that its first elememt is always maximum .
    for (int i = 0; i < n; i++)
    {
        p.push(arr[i]);
    }
    cout << p.size() << endl;
    cout << p.top();
}