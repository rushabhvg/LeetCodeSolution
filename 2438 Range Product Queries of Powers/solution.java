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
    public int[] productQueries(int n, int[][] queries) {
        int pow = 1, MOD = (int) 1e9 + 7;
        while(pow <= n) {
            pow <<= 1;
        }
        pow >>= 1;

        List<Integer> pows = new ArrayList<>();
        while(n > 0) {
            if(pow <= n) {
                pows.add(pow);
                n -= pow;
            }
            pow >>= 1;
        }
        n = pows.size();
        int[][] pre = new int[n][n];
        for(int i = 0; i < n; i++) {
            pre[i][i] = pows.get(n - 1 - i);
            for(int j = i + 1; j < n; j++) {
                pre[i][j] = (int)( ( 1L * pre[i][j - 1] * pows.get(n - 1 - j ) ) % MOD);
            }
        }

        int[] res = new int[queries.length];
        for(int i = 0; i < queries.length; i++) {
            res[i] = pre[queries[i][0]][queries[i][1]];
        }

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
