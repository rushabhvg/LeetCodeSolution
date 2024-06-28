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
    public long maximumImportance(int n, int[][] roads) {
        long[] inBound = new long[n];
        long ans = 0, x = 1;
        for(int road[]:roads) {
            inBound[road[0]]++;
            inBound[road[1]]++;
        }
        Arrays.sort(inBound);
        for(long i:inBound) {
            ans += i*(x++);
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
