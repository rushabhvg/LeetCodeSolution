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
    public int maxFreeTime(int eventTime, int k, int[] startTime, int[] endTime) {
        int n = startTime.length;
        int[] prefSum = new int[n+1];
        int maxFree = 0;
        for(int i = 0; i < n; i++) {
            prefSum[i+1] = prefSum[i] + endTime[i] - startTime[i];
        }

        for(int i = k-1; i<n; i++) {
            int occupied = prefSum[i+1] - prefSum[i-k+1];
            int right = (i==n-1) ? eventTime : startTime[i+1];
            int left = (i==k-1) ? 0 : endTime[i-k];
            int free = right - left - occupied;
            maxFree = Math.max(maxFree, free);
        }

        return maxFree;
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
