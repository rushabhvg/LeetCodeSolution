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
        int[] frq = new int[101];
        int[] arr = new int[n];
        for(int i=0; i<n; i++) {
            frq[heights[i]]++;
        }
        for(int i=0; i<101; i++) {
            while(frq[i]-->0) {
                arr[cnt++] = i;
            }
        }
        cnt = 0;
        for(int i=0; i<n; i++) {
            if(arr[i]!=heights[i]) cnt++;
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
