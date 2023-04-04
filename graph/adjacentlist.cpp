#include <bits/stdc++.h>
using namespace std;
const int n = 1e3 + 10;
vector<int> graph[n];
int main()
{
    int n, e;
    cin >> n >> e;
    for (int i = 0; i < e; i++)
    {
        int v, u;
        cin >> v >> u;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
}

// space complexity - 0(N+e)