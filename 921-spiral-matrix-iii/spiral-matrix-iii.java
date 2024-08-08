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
    public int[][] spiralMatrixIII(int rows, int cols, int rStart, int cStart) {
        int[][] res = new int [rows*cols][2];
        int dx=0, dy=1, n=0, tmp;
        for(int j=0; j<rows*cols; n++) {
            for(int i=0; i<n/2 + 1; i++) {
                if(0<=rStart && rStart<rows && 0<=cStart && cStart<cols) {
                    res[j++] = new int[] {rStart, cStart};
                }
                rStart += dx;
                cStart += dy;
            }
            tmp = dx;
            dx = dy;
            dy = -tmp;
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
