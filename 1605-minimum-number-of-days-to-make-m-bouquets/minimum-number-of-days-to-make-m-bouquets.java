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
    public int minDays(int[] bloomDay, int m, int k) {
        int n = bloomDay.length;
        if((long)m*k>n) return -1;
        int st = 1;
        int end = (int)1e9;
        int mid =1;
        while(st<end) {
            mid = (st+end)/2;
            int currFlowers =0, bouquetsMade = 0;
            for(int i=0; i<n; ++i) {
                if(bloomDay[i]>mid) currFlowers=0;
                else if(++currFlowers >= k) {
                    bouquetsMade++;
                    currFlowers=0;
                }
            }
            if(bouquetsMade<m) {
                st = mid+1;
            } else{
                end = mid;
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
