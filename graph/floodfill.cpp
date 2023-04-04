class Solution
{
public:
    void dfs(int i, int j, int initialcolor, vector<vector<int>> &image, int sr, int sc, int color)
    {
        int n = image.size();
        int m = image[0].size();
        if (i < 0 || j < 0 || i >= n || j >= m)
        {
            return;
        }
        if (image[i][j] != initialcolor)
        {
            return;
        }
        image[i][j] = color;
        dfs(i, j + 1, initialcolor, image, sr, sc, color);
        dfs(i, j - 1, initialcolor, image, sr, sc, color);
        dfs(i + 1, j, initialcolor, image, sr, sc, color);
        dfs(i - 1, j, initialcolor, image, sr, sc, color);
    }
    vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int color)
    {
        int initialcolor = image[sr][sc];
        if (initialcolor != color)
        {
            dfs(sr, sc, initialcolor, image, sr, sc, color);
        }
        return image;
    }
};