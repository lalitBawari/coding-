#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        // int x;
        // cin >> x;
        // v.push_back(x);
        cin >> v[i];
    }
    v.push_back(9);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    v.pop_back();
    cout << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    vector<int> v2 = v;
    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << " ";
    }
}