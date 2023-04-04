#include <bits/stdc++.h>
using namespace std;
string calc(string s)
{
    int n = s.size();
    int count = 1;
    string x = "";
    for (int i = 0; i < n; i++)
    {
        if (s[i] == s[i + 1])
        {
            count++;
        }
        if (s[i] != s[i + 1])
        {
            x.push_back(s[i]);
            x = x + to_string(count);
            count = 1;
        }
    }
    return x;
}
int main()
{
    string s;
    cin >> s;

    string ans = calc(s);
    cout << "\nAnswer is :" << ans << " ";
}