class Solution {
private:
    int DFS(vector<vector<int>>& grid, int i, int j) {
        if (i < 0 || i >= grid.size() ||
            j < 0 || j >= grid[0].size() ||
            grid[i][j] == 0) return 0;

        grid[i][j] = 0;
        int len = 1;
        len += DFS(grid, i+1, j);
        len += DFS(grid, i-1, j);
        len += DFS(grid, i, j+1);
        len += DFS(grid, i, j-1);
        return len;
    }
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
       int m = grid.size();
       int n = grid[0].size();
       int ans = 0;
       for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                int len = DFS(grid, i, j);
                if (ans < len)
                    ans = len;
            }
       } 
       return ans;
    }
};
