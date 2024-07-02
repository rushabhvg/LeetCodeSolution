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
    public int[] intersect(int[] nums1, int[] nums2) {
        int n = nums1.length;
        int m = nums2.length;

        ArrayList<Integer> arr = new ArrayList<>();
        HashMap<Integer, Integer> mp1, mp2;
        mp1 = new HashMap<>();
        mp2 = new HashMap<>();

        for(int no:nums1) {
            mp1.put(no, mp1.getOrDefault(no, 0)+1);
        }
        for(int no:nums2) {
            mp2.put(no, mp2.getOrDefault(no, 0)+1);
        }

        for(int k:mp1.keySet()) {
            int mn = mp2.getOrDefault(k, 0);
            mn = Math.min(mn, mp1.get(k));
            for(int i=0; i<mn; i++) {
                arr.add(k);
            }
        }

        int sz = arr.size();
        int[] ans = new int[sz];
        for(int i=0; i<sz; i++) {
            ans[i] = arr.get(i);
        }

        return ans;
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
