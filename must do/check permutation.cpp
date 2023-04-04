#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    //    OPTIMAL -----

    // unordered_map<char, int> m1;
    // for (auto i : s1)
    // {
    //     m1[i]++;
    // }
    // unordered_map<char, int> m2;
    // for (auto i : s2)
    // {
    //     m2[i]++;
    // }
    // if (m1 == m2)
    // {
    //     cout << "yes";
    // }
    // else
    // {
    //     cout << "no";
    // }
    //    BRUTE -----

    // if (s1.size() != s2.size())
    // {
    //     cout << "not";
    //     return 0;
    // }
    // else
    // {
    //     for (int i = 0; i < s1.size(); i++)
    //     {
    //         for (int j = 0; j < s2.size(); j++)
    //         {
    //             if (s1[i] == s2[j])
    //             {
    //                 s2[j] = '#';
    //             }
    //         }
    //     }
    //     for (int i = 0; i < s2.size(); i++)
    //     {
    //         if (s2[i] != '#')
    //         {
    //             cout << "not";
    //             return 0;
    //         }
    //     }
    // }
    // cout << " yes";
}