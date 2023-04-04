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
    // it follows   FIFO
    queue<int> q; // it is a liner list element where insertion always takes from end and deletion from front .
    // for (int i = 0; i < n; i++)   //insertion
    // {
    //     q.push(arr[i]);
    // }
    // cout << q.size() << endl;
    // cout << q.front() << endl;
    // cout << q.back() << endl;

    // deletion
    q.pop();
}