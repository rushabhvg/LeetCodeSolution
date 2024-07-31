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
    public int minHeightShelves(int[][] books, int shelfWidth) {
        int[] dp = new int[books.length+1];
        dp[0] = 0;
        for(int i=1; i<=books.length; i++) {
            int w = books[i-1][0];
            int ht = books[i-1][1];
            dp[i] = dp[i-1] + ht;
            for(int j=i-1; j>0 && w+books[j-1][0]<=shelfWidth; j--) {
                ht = Math.max(ht, books[j-1][1]);
                w += books[j-1][0];
                dp[i] = Math.min(dp[i], dp[j-1]+ht);
            }
        }
        return dp[books.length];
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
