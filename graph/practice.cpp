class Solution
{
public:
    int ans = 0;
    void dfs(int i, int j, vector<vector<int>> &grid, int n, int m)
    {

        if (i >= n || j >= m || i < 0 || j < 0 || grid[i][j] == 0)
        {
            ans++;
            return;
        }
        if (grid[i][j] == 2)
        {
            return;
        }
        grid[i][j] = 2;
        dfs(i, j + 1, grid, n, m);
        dfs(i, j - 1, grid, n, m);
        dfs(i + 1, j, grid, n, m);
        dfs(i - 1, j, grid, n, m);
    }

    int islandPerimeter(vector<vector<int>> &grid)
    {
        int n = grid.size();
        int m = grid[0].size();
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (grid[i][j] == 1)
                {
                    dfs(i, j, grid, n, m);
                }
            }
        }
        return ans;
    }
};
