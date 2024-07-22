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
    public int shipWithinDays(int[] weights, int days) {
        int n = weights.length;
        int st = 1;
        int end = 0;
        int mid = 0;
        for(int w:weights) {
            if(w>st) {
                st = w;
            }
            end += w;
        }
        while(st<end) {
            mid = (st + end)/2;
            int d = 1;
            int tot = 0;
            for(int w:weights) {
                tot += w;
                if(tot>mid) {
                    tot = w;
                    d += 1;
                }
                if(d>days) break;
            }
            if(d<=days) {
                end = mid;
            } else {
                st = mid+1;
            }
        }
        return st;
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
