#include <bits/stdc++.h>
using namespace std;
const int n = 1e5 + 10;
vector<int> graph[n];
bool visited[n];
bool dfs(int vertex, int parent)
{
    visited[vertex] = true;
    bool isloopexist = false;
    for (int child : graph[vertex])
    {
        if (visited[child] == true && child == parent)
        {
            continue;
        }
        if (visited[child] == true)
        {
            return true;
        }
        isloopexist |= dfs(child, vertex);
    }
    return isloopexist;
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
    bool isloopexist = false;
    for (int i = 1; i <= n; i++)
    {
        if (visited[i] == true)
        {
            continue;
        }
        if (dfs(i, 0) == true)
        {
            isloopexist = true;
            break;
        }
    }
    cout << isloopexist;
}