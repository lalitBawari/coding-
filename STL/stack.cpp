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
    // it follows    LIFO
    stack<int> s; // it is a ordered list where insertion and deletion both take place from top of the stack
    for (int i = 0; i < n; i++)
    {
        s.push(arr[i]);
    }
    cout << s.size() << endl;
    cout << s.top();
}