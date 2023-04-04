#include <bits/stdc++.h>
using namespace std;
const int n = 1e5 + 10;
vector<int> graph[n];
bool visited[n];
void dfs(int vertex)
{
    // section I
    // taking action on vertex after entering the vertex
    visited[vertex] = true;
    for (int child : graph[vertex])
    {
        if (visited[child] == true)
        {
            continue;
        }
        // section II
        // taking tha action just before entering the child node
        dfs(child);
        // section III
        // taking action just after exiting the child node
    }
    // section IV
    // taking action on vertex just before exting the vertex
}

// time complexity - 0(vertex + edges)
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
}