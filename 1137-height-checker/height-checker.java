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
    public int heightChecker(int[] heights) {
        int n = heights.length;
        if(n==1) return 0;
        int cnt = 0;
        int[] xpctd = new int[n];
        for(int i=0; i<n; i++) {
            xpctd[i] = heights[i];
        }
        Arrays.sort(xpctd);
        for(int i=0; i<n; i++) {
            if(heights[i] != xpctd[i]) cnt++;
        }
        return cnt;
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
