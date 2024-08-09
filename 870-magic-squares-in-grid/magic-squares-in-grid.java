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
    public int numMagicSquaresInside(int[][] grid) {
        int ans = 0;
        int m = grid.length;
        int n = grid[0].length;
        for(int r=0; r+2<m; r++) {
            for(int c=0; c+2<n; c++) {
                if(isMagic(grid, r, c)) ans++;
            }
        }
        return ans;
    }
    public boolean isMagic(int[][] grid, int r, int c) {
        String seq = "2943816729438167";
        String revSeq = "7618349276183492";
        StringBuilder border = new StringBuilder();
        int[] borderIdx = new int[] {0, 1, 2, 5, 8, 7, 6, 3};
        for(int i:borderIdx) {
            int num = grid[r+i/3][c+(i%3)];
            border.append(num);
        }
        String borderConv = border.toString();
        return (
            grid[r][c]%2==0 &&
            (seq.contains(borderConv) || revSeq.contains(borderConv)) &&
            grid[r+1][c+1] == 5
        );
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
