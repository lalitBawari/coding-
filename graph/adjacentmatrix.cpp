#include <bits/stdc++.h>
using namespace std;
const int n = 1e3 + 10;
int graph[n][n];
int main()
{
    int n, e;
    cin >> n >> e;
    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;
        graph[u][v] = 1;
        graph[v][u] = 1;
    }
}

// space complexity- 0(N^2)