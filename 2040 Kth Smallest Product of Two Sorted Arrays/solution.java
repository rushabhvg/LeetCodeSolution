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
    static long INF = (long) 1e10;
    public long kthSmallestProduct(int[] nums1, int[] nums2, long k) {
        int m = nums1.length, n = nums2.length;
        long low = - INF - 1, high = INF + 1;
        while(low < high) {
            long mid = low + ((high-low)>>1);
            long cnt = 0;
            for(int i : nums1) {
                if(0 <= i) {
                    int l = 0, r = n-1, p = 0;
                    while(l <= r) {
                        int m2 = l + ((r-l)>>1);
                        long mul = i * (long) nums2[m2];
                        if(mul <= mid) {
                            p = m2 + 1;
                            l = m2 + 1;
                        } else {
                            r = m2 - 1;
                        }
                    }
                    cnt += p;
                } else {
                    int l = 0, r = n-1, p = 0;
                    while(l <= r) {
                        int m2 = l + ((r-l)>>1);
                        long mul = i * (long) nums2[m2];
                        if(mul <= mid) {
                            p = n - m2;
                            r = m2 - 1;
                        } else {
                            l = m2 + 1;
                        }
                    }
                    cnt += p;
                }
            }
            if(cnt >= k) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }
        return low;
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
