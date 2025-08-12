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
    private static final int MOD = 1_000_000_007;
    public int numberOfWays(int n, int x) {
        long[] dp = new long[n + 1];
        dp[0] = 1;
        for(int i = 1; Math.pow(i, x) <= n; i++) {
            int pow = (int) Math.pow(i, x);
            for(int sum = n; sum >= pow; sum--) {
                dp[sum] = (dp[sum] + dp[sum - pow]) % MOD;
            }
        }
        return (int) dp[n];
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
