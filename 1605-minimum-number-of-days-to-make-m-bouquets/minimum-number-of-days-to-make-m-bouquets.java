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
    public int minDays(int[] A, int m, int k) {
        int n = A.length, left = 1, right = (int)1e9;
        if ((long)m * k > n) return -1;
        while (left < right) {
            int mid = (left + right) / 2, flow = 0, bouq = 0;
            for (int j = 0; j < n; ++j) {
                if (A[j] > mid) {
                    flow = 0;
                } else if (++flow >= k) {
                    bouq++;
                    flow = 0;
                }
            }
            if (bouq < m) {
                left = mid + 1;
            } else {
                right = mid;
            }
        }
        return left;
    }
    // public int minDays(int[] bloomDay, int m, int k) {
    //     int n = bloomDay.length;
    //     if(m*k>n) return -1;
    //     int st = 1;
    //     int end = (int)1e9;
    //     int mid =1;
    //     while(st<end) {
    //         mid = (st+end)/2;
    //         int currFlowers =0, bouquetsMade = 0;
    //         for(int i=0; i<n; ++i) {
    //             if(bloomDay[i]>mid) currFlowers=0;
    //             else if(++currFlowers >= k) {
    //                 bouquetsMade++;
    //                 currFlowers=0;
    //             }
    //         }
    //         if(bouquetsMade<m) {
    //             st = mid+1;
    //         } else{
    //             end = mid;
    //         }
    //     }
    //     return st;
    // }
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
