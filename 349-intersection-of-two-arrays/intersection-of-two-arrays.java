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
    public int[] intersection(int[] nums1, int[] nums2) {
        Set<Integer> st = new HashSet<>();
        Set<Integer> intersect = new HashSet<>();
        for(int i=0; i<nums1.length; i++) {
            st.add(nums1[i]);
        }
        for(int i=0; i<nums2.length; i++) {
            if(st.contains(nums2[i])) {
                intersect.add(nums2[i]);
            }
        }
        int[] res = new int[intersect.size()];
        int i = 0;
        for(Integer num:intersect) {
            res[i++] = num;
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
