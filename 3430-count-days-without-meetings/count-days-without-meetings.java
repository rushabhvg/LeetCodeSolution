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
    public int countDays(int days, int[][] meetings) {
        Arrays.sort(meetings, (a, b) -> a[0]-b[0]);
        int st = meetings[0][0];
        int end = meetings[0][1];
        days -= (end-st) + 1;
        for(int i=1; i<meetings.length; i++) {
            if(meetings[i][0]<=end && meetings[i][1]>end) {
                st = end+1;
                end = meetings[i][1];
                days -= (end-st) + 1;
            } else if (meetings[i][0]>end) {
                st = meetings[i][0];
                end = meetings[i][1];
                days -= (end-st)+1;
            }
        }
        return days;
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
