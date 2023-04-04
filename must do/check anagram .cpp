#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, p;
    cin >> s >> p;
    // approch 1   semi optimal       t.c -0(n logn) | s.c-0(1);
    //  sort(s.begin(), s.end());
    //  sort(p.begin(), p.end());
    //  if (s == p)
    //  {
    //      cout << "yes";
    //  }
    //  else
    //  {
    //      cout << "no";
    //  }
    //  approch 2          t.c - 0(n) ||  s.c-0(n)       [optimal approch ]
    //  if (s.size() != p.size())
    //  {
    //      cout << "not";
    //  }
    //  unordered_map<char, int> m;
    //  for (auto it : p)
    //  {
    //      m[it]++;
    //  }
    //  for (int i = 0; i < s.size(); i++)
    //  {
    //      if (m.find(s[i]) != m.end())
    //      {
    //          m[s[i]]--;
    //          if (m[s[i]] == 0)
    //          {
    //              m.erase(s[i]);
    //          }
    //      }
    //  }
    //  if (m.size() == 0)
    //  {
    //      cout << "yes";
    //  }
    //  else
    //  {
    //      cout << "no";
    //  }

    // approch 3    using two map  t.c-(0(n)) | s.c(0(n))   [ optimal & best ]
    unordered_map<char, int> m1;
    for (auto it : p)
    {
        m1[it]++;
    }
    unordered_map<char, int> m2;
    for (auto it : s)
    {
        m2[it]++;
    }
    if (m1 == m2)
    {
        cout << "yes";
    }
    else
    {
        cout << " no";
    }
}