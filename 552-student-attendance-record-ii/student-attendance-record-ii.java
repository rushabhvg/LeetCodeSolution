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
    private static final int MOD = 1000000007;
    private long[][][] dp;

    private long solve(int n, int absentCount, int consecLateCount) {
        if (n == 0) return 1;

        if (dp[n][absentCount][consecLateCount] != -1) 
            return dp[n][absentCount][consecLateCount];

        long ans = 0;
        ans = solve(n - 1, absentCount, 0) % MOD;
        if (absentCount < 1) {
            ans = (ans + solve(n - 1, absentCount + 1, 0)) % MOD;
        }
        if (consecLateCount < 2) {
            ans = (ans + solve(n - 1, absentCount, consecLateCount + 1)) % MOD;
        }

        dp[n][absentCount][consecLateCount] = ans % MOD;
        return ans;
    }

    public int checkRecord(int n) {
        dp = new long[n + 1][2][3];
        for (long[][] matrix : dp) {
            for (long[] row : matrix) {
                Arrays.fill(row, -1);
            }
        }
        return (int) solve(n, 0, 0);
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
