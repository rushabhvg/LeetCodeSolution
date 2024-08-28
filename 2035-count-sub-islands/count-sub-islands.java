/*
By Rushabh Gala
rushabhvg
GitHub:
https://github.com/rushabhvg
StackOverflow:
https://stackoverflow.com/users/16571212/rushabhvg
LinkedIn:
https://www.linkedin.com/in/rushabhvg/
*/

class Solution {
    public int dfs(int[][] grid1, int[][] grid2, int i, int j) {
        int m = grid2.length, n = grid2[0].length, res = 1;
        if(i<0 || i==m || j<0 || j==n || grid2[i][j]==0) return 1;
        grid2[i][j] = 0;
        res &= dfs(grid1, grid2, i-1, j);
        res &= dfs(grid1, grid2, i+1, j);
        res &= dfs(grid1, grid2, i, j-1);
        res &= dfs(grid1, grid2, i, j+1);
        return res & grid1[i][j];
    }
    public int countSubIslands(int[][] grid1, int[][] grid2) {
        int m = grid2.length, n = grid2[0].length, res = 0;
        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++) {
                if(grid2[i][j]==1) {
                    res += dfs (grid1, grid2, i, j);
                }
            }
        }
        return res;
    }
}

/*
By Rushabh Gala
rushabhvg
GitHub:
https://github.com/rushabhvg
StackOverflow:
https://stackoverflow.com/users/16571212/rushabhvg
LinkedIn:
https://www.linkedin.com/in/rushabhvg/
*/
