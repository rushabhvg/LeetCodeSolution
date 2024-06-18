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
    public int maxProfitAssignment(int[] difficulty, int[] profit, int[] worker) {
        int maxDiff = 0;
        for(int d:difficulty) {
            maxDiff = Math.max(maxDiff, d);
        }

        int[] mxProfit = new int[maxDiff+1];
        for(int i=0; i<difficulty.length; i++) {
            mxProfit[difficulty[i]] = Math.max(mxProfit[difficulty[i]], profit[i]);
        }

        for(int i=1; i<=maxDiff; i++) {
            mxProfit[i] = Math.max(mxProfit[i], mxProfit[i-1]);
        }

        int tot = 0;
        for(int w:worker) {
            if(w>maxDiff) {
                tot += mxProfit[maxDiff];
            } else {
                tot += mxProfit[w];
            }
        }

        return tot;
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
