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
    public void setZeroes(int[][] matrix) {
        int n = matrix.length;
        int m = matrix[0].length;
        int[] col = new int[m];
        int[] row = new int[n];
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(matrix[i][j]==0) {
                    row[i] = 1;
                    col[j] = 1;
                }
            }
        }
        // int k;
        // for(k=0; k<Math.min(m, n); k++) {
        //     System.out.print(k +" => " + row[k] + "\t" + col[k]+ "\n");
        // }
        // while(k<n) {
        //     System.out.print(k +" => " + row[k++] + "\n");
        // }
        // while(k<m) {
        //     System.out.print(k +" => \t" + col[k++] + "\n");
        // }
        for(int i=0; i<n; i++) {
            if(row[i]==1) {
                for(int j=0; j<m; j++) {
                    matrix[i][j] = 0;
                }
            }
        }
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(col[j]==1) {
                    matrix[i][j] = 0;
                }
            }
        }
        return ;
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
