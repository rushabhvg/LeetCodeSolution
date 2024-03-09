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
    public int getCommon(int[] nums1, int[] nums2) {
        int i = 0;
        int j = 0;
        int n = nums1.length;
        int m = nums2.length;
        if(nums1[n-1]<nums2[0] || nums2[m-1]<nums1[0]) return -1;
        while(i<n && j<m) {
            if(nums1[i]==nums2[j]) return nums1[i];
            while(i<n && j<m && nums1[i]<nums2[j]) i++;
            while(i<n && j<m && nums1[i]>nums2[j]) j++;
        }
        return -1;
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
