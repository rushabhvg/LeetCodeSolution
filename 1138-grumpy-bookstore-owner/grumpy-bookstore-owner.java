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
    public int maxSatisfied(int[] customers, int[] grumpy, int minutes) {
        int n = grumpy.length;
        int i=0;
        int curr = 0;
        int mx = 0;
        for(int j=0; j<n; j++) {
            curr += ( grumpy[j] * customers[j] );
            mx = Math.max(mx, curr);
            if(j>=minutes-1) {
                curr -= customers[i] * grumpy[i++];
            }
        }
        int res = mx;
        for(i=0; i<n; i++) {
            res += customers[i]*(1-grumpy[i]);
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
