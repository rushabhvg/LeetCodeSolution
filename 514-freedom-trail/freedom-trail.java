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
    public int findRotateSteps(String ring, String key) {
        char[] r = ring.toCharArray();
        List<Integer>[] pos = new List[26];
        for(int i=0; i<r.length; i++) {
            int c = r[i]-'a';
            if(pos[c]==null) pos[c]=new ArrayList<>();
            pos[c].add(i);
        }
        int[][] dp = new int[key.length()][r.length];
        return help(0, 0, pos, key.toCharArray(), r, dp);
    }
    int help(int idx, int posi, List<Integer>[] pos, char[] key, char[] ring, int[][] dp) {
        if(idx==key.length) return  0;
        if(dp[idx][posi]>0) return dp[idx][posi];
        char tgt = key[idx];
        List<Integer> possible = pos[tgt-'a'];
        int mn = Integer.MAX_VALUE;
        for(int nxt:possible) {
            int steps = Math.min(Math.abs(nxt-posi), ring.length-Math.abs(nxt-posi));
            int tot = steps + help(idx+1, nxt, pos, key, ring, dp);
            mn = Math.min(mn, tot);
        }

        return dp[idx][posi] = mn+1;
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
