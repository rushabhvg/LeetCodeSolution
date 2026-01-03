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
    public int numOfWays(int n) {
        long mod = 1_000_000_007;
        long ryr = 6, ryg = 6, ryr2, ryg2;
        for(int i = 1; i < n; i++) {
            ryr2 = ((ryr * 3) + (ryg * 2));
            ryg2 = ((ryr * 2) + (ryg * 2));
            ryr = ryr2 % mod;
            ryg = ryg2 % mod;
        }
        return (int)((ryr + ryg) % mod);
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
