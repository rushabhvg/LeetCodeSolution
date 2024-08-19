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
    public int minSteps(int n) {
        if(n==1) return 0;
        if(n==2) return 2;
        if(n==3) return 3;
        int[] dp = new int[n+1];
        for(int i=2; i<=n; i++) {
            dp[i] = i;
            for(int j=i-1; j>1; j--) {
                if(i%j==0) {
                    dp[i] = dp[j] + (i/j);
                    break;
                }
            }
        }
        return dp[n];
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
