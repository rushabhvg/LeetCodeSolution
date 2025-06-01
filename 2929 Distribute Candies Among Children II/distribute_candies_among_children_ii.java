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
    public long distributeCandies(int n, int limit) {
        long ans = 0;
        int min1 = Math.max(0, n - 2*limit);
        int max1 = Math.min(n, limit);
        for(int i = min1; i <= max1; i++) {
            int min2 = Math.max(0, n - i - limit);
            int max2 = Math.min(n-i, limit);
            ans += max2 - min2 +1;
        }
        return ans;
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
