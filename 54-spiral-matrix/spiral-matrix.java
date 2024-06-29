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
    int n;
    int m;
    List<Integer> ans = new LinkedList();;
    int topI = 0;
    int bottomI;
    int leftI = 0;
    int rightI;
    public void goRight(int[][] matrix) {
        for(int i = leftI; i<=rightI; i++) {
            ans.add(matrix[topI][i]);
        }
        return ;
    }
    public void goDown(int[][] matrix) {
        for(int i=topI; i<=bottomI; i++) {
            ans.add(matrix[i][rightI]);
        }
        return ;
    }
    public void goLeft(int[][] matrix) {
        for(int i = rightI; i>=leftI; i--) {
            ans.add(matrix[bottomI][i]);
        }
        return ;
    }
    public void goUp(int[][] matrix) {
        for(int i=bottomI; i>=topI; i--) {
            ans.add(matrix[i][leftI]);
        }
        return ;
    }
    public List<Integer> spiralOrder(int[][] matrix) {
        n = matrix.length;
        m = matrix[0].length;
        bottomI = n-1;
        rightI = m-1;
        while(topI<=bottomI && leftI<=rightI) {
            if(topI>bottomI || leftI>rightI) break;
            goRight(matrix);
            topI++;
            if(topI>bottomI || leftI>rightI) break;
            goDown(matrix);
            rightI--;
            if(topI>bottomI || leftI>rightI) break;
            goLeft(matrix);
            bottomI--;
            if(topI>bottomI || leftI>rightI) break;
            goUp(matrix);
            leftI++;
            if(topI>bottomI || leftI>rightI) break;
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
