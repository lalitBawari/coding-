#include <bits/stdc++.h>
using namespace std;
const int n = 1e5 + 10;
vector<int> graph[n];
bool visited[n];
void dfs(int vertex)
{
    if (visited[vertex])
    {
        return;
    }
    visited[vertex] = true;
    for (int child : graph[vertex])
    {
        dfs(child);
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (visited[i] == true)
        {
            continue;
        }
        dfs(i);
        count++;
    }
    cout << count;
}