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
        public int stoneGameII(int[] piles) {
        int[] presum =  Arrays.copyOf(piles, piles.length);
        for (int i = presum.length - 2; i >= 0; i--) presum[i] += presum[i + 1];
        return dfs(presum, 1, 0, new int[piles.length][piles.length]);
    }
    private int dfs(int[] presum, int m, int p, int[][] memo) {
        if (p + 2 * m >= presum.length) {
            return presum[p];
        }

        if (memo[p][m] > 0) return memo[p][m];
        int res = 0, take = 0;
        for (int i = 1; i <= 2 * m; i++) {
            take = presum[p] - presum[p + i];
            res = Math.max(res, take + presum[p + i] - dfs(presum, Math.max(i, m), p + i, memo));
        }
        memo[p][m] = res;
        return res;
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
