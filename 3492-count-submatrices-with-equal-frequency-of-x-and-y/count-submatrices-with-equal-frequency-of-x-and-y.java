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
    public int numberOfSubmatrices(char[][] grid) {
        int n = grid.length;
        int m = grid[0].length;
        int[][] prefX = new int[n+1][m+1];
        int[][] prefY = new int[n+1][m+1];
        for(int i=0; i<=n; i++) {
            Arrays.fill(prefX[i], 0);
            Arrays.fill(prefY[i], 0);
        }

        for(int i=1; i<=n; i++) {
            for(int j=1; j<=m; j++) {
                prefX[i][j] = prefX[i-1][j] + prefX[i][j-1]
                              - prefX[i-1][j-1]
                              + (grid[i-1][j-1]=='X'?1:0);
                prefY[i][j] = prefY[i-1][j] + prefY[i][j-1]
                              - prefY[i-1][j-1]
                              + (grid[i-1][j-1]=='Y'?1:0);
            }
        }

        int res = 0;
        for(int i=1; i<=n; i++) {
            for(int j=1; j<=m; j++) {
                int cntX = prefX[i][j];
                int cntY = prefY[i][j];
                if(cntX==cntY && cntX>0) res++;
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
