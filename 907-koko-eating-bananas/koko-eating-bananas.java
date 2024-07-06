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
    public int minEatingSpeed(int[] piles, int h) {
        int n = piles.length;
        long sum = 0;
        for(int p:piles) sum+=p;
        int st = (int) Math.ceilDiv(sum, h);
        int end = (int) Math.ceilDiv(sum, h-n+1);
        int mid = 1;
        while(st<end) {
            mid = (st+end)/2;
            int time = 0;
            for(int i=0; i<n; i++) {
                time += (piles[i]/mid) + (piles[i]%mid>0 ? 1 : 0);
                if(time>h) break;
            }
            if(time>h) st = mid+1;
            else end = mid;
        }
        return end;
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
