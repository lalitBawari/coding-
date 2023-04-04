#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    // unordered_set<int> s; // it is a stl container which store distinct or unique element
    // for (int i = 0; i < N; i++)
    // {
    //     s.insert(arr[i]);
    // }
    // for (auto i = s.begin(); i != s.end(); i++)
    // {
    //     cout << *i << " ";
    // }

    set<int> s; // it is a stl container which store unique values in ordered form
    for (int i = 0; i < N; i++)
    {
        s.insert(arr[i]);
    }
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }
}