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
    public boolean exist(char[][] board, String word) {
        for(int i=0; i<board.length; i++) {
            for(int j=0; j<board[0].length; j++) {
                if(board[i][j] == word.charAt(0)) {
                    boolean ans = srch(board, word, i, j, 0);
                    if(ans) return ans;
                }
            }
        }
        return false;
    }

    public boolean srch(char[][] board, String word, int row, int col, int idx) {
        if(idx==word.length()) return true;
        if(row<0 || col<0 || row>=board.length || col>=board[0].length || board[row][col]!=word.charAt(idx) ) return false;

        board[row][col] = '-';
        int[] pncR = {-1, 1, 0, 0};
        int[] pncC = {0, 0, -1, 1};
        for(int i=0; i<4; i++) {
            boolean ans = srch(board, word, row+pncR[i], col + pncC[i], idx+1);
            if(ans==true) return ans;
        }

        board[row][col] = word.charAt(idx);
        return false;
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
