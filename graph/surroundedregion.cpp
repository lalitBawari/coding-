class Solution
{
public:
    void dfs(int i, int j, vector<vector<char>> &board, int n, int m)
    {
        if (i < 0 or j < 0 or i >= n or j >= m or board[i][j] == 'X' or board[i][j] == '#')
        {
            return;
        }
        board[i][j] = '#';
        dfs(i, j + 1, board, n, m);
        dfs(i, j - 1, board, n, m);
        dfs(i + 1, j, board, n, m);
        dfs(i - 1, j, board, n, m);
    }
    void solve(vector<vector<char>> &board)
    {
        int n = board.size();
        int m = board[0].size();
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (i == 0 or j == 0 or i == n - 1 or j == m - 1)
                {
                    if (board[i][j] == 'O')
                    {
                        dfs(i, j, board, n, m);
                    }
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (board[i][j] == 'O')
                {
                    board[i][j] = 'X';
                }
                if (board[i][j] == '#')
                {
                    board[i][j] = 'O';
                }
            }
        }
        return;
    }
};