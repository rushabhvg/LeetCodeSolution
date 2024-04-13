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
    private int largestRectArea(int[] area) {
        int ans = 0;
        Deque<Integer> q = new ArrayDeque<>();
        for(int i=0; i<=area.length; i++) {
            while(!q.isEmpty() && (i==area.length || area[q.peek()] > area[i] )) {
                int ht = area[q.pop()];
                int width = q.isEmpty() ? i : i-q.peek() - 1;
                ans = Math.max(ans, ht*width);
            }
            q.push(i);
        }
        return ans;
    }
    public int maximalRectangle(char[][] matrix) {
        int ans = 0;
        int[] area = new int[matrix[0].length];
        for(char[] row : matrix) {
            for(int i=0; i<row.length; i++) {
                area[i] = row[i]=='0' ? 0 : area[i]+1;
            }
            ans = Math.max(ans, largestRectArea(area));
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
