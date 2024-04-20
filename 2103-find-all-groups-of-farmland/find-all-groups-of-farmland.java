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
    public void dfs(int[][] land, boolean[][] vis, int r, int c, List<Integer> temp) {
        int row = land.length;
        int col = land[0].length;
        vis[r][c] = true;

        if( 
            (c==col-1 && r==row-1)
            || (r+1<=row-1 && c+1<=col-1 && land[r+1][c]==0 && land[r][c+1]==0)
            || (c==col-1 && land[r+1][c]==0)
            || (r==row-1 && land[r][c+1]==0)
        ) {
            temp.add(r);
            temp.add(c);
        }

        int[] dp1 = {0, 0, -1, 1};
        int[] dp2 = {1, -1, 0, 0};
        for(int i=0; i<4; i++) {
            int cr = dp1[i]+r;
            int cc = dp2[i]+c;
            if(cr>=0 && cc>=0 && cc<col && cr<row && land[cr][cc]==1 && !vis[cr][cc]) {
                dfs(land, vis, cr, cc, temp);
            } 
        }
    }
    public int[][] findFarmland(int[][] land) {
        int row = land.length;
        int col = land[0].length;
        List<List<Integer>> ans = new ArrayList<>();
        boolean[][] vis = new boolean[row][col];

        for(int i=0; i<row; i++) {
            for(int j=0; j<col; j++) {
                List<Integer> temp = new ArrayList<>();
                if(!vis[i][j] && land[i][j]==1) {
                    temp.add(i);
                    temp.add(j);
                    dfs(land, vis, i , j, temp);
                    ans.add(temp);
                }
            }
        }

        int[][] res = new int[ans.size()][];
        for(int i=0; i<ans.size(); i++) {
            List<Integer> sl = ans.get(i);
            res[i] = new int[sl.size()];
            for(int j=0; j<sl.size(); j++) {
                res[i][j] = sl.get(j);
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
