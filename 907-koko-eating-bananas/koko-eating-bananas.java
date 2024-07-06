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
        int st = 1;
        int end = 1000000000;
        int n = piles.length;
        int mid = 1;
        while(st<end) {
            mid = (st+end)/2;
            int time = 0;
            // System.out.print(st+ " " + mid + " " + end + " -> ");
            for(int i=0; i<n; i++) {
                // time += (piles[i]/mid) + (piles[i]%mid>0 ? 1 : 0);
                time += (piles[i]+mid-1)/mid;
            }
            // System.out.print(time + "\n");
            // if(time==h) return mid;
            if(time>h) {
                st = mid+1;
            } else {
                end = mid;
            }
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
