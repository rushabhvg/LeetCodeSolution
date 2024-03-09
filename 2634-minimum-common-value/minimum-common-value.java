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
        while(i<nums1.length && j<nums2.length) {
            if(i<nums1.length && j<nums2.length && nums1[i]==nums2[j]) {
                return nums1[i];
            }

            while(i<nums1.length && j<nums2.length && nums1[i]<nums2[j]) {
                i++;
            }
            
            if(i<nums1.length && j<nums2.length && nums1[i]==nums2[j]) {
                return nums1[i];
            }

            while(i<nums1.length && j<nums2.length && nums1[i]>nums2[j]) {
                j++;
            }
            
            if(i<nums1.length && j<nums2.length && nums1[i]==nums2[j]) {
                return nums1[i];
            }
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
