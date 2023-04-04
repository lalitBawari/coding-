#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int arr[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        int pos = s[i] - 'a';
        arr[pos]++;
    }
    // bool x = false;
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] == 0)
        {
            continue;
        }
        if (arr[i] > 1)
        {
            cout << "not unique";
            // x = true;
            // break;
            return 0;
        }
    }
    // if (x == false)
    // {
    cout << "unique";
    // }
    return 0;
}
