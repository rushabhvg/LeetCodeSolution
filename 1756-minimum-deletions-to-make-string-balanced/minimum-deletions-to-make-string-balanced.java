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
    public int minimumDeletions(String s) {
        int n = s.length();
        int[] dp = new int[n+1];
        int cnt = 0;
        for(int i=0; i<n; i++) {
            if(s.charAt(i)=='a') {
                dp[i+1] = Math.min(dp[i]+1, cnt);
            } else {
                dp[i+1] = dp[i];
                cnt++;
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
