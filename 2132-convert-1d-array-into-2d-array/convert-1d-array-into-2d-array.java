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
    public int[][] construct2DArray(int[] original, int m, int n) {
        int sz = original.length;
        if(sz!=m*n) return new int[0][0];
        int[][] ans = new int[m][n];
        int row = 0, col = 0;
        for(int i=0; i<sz; i++) {
            ans[ row ][ col++ ] = original[i];
            if(col==n) {
                row++;
                col = 0;
            }
        }
        return ans;
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
