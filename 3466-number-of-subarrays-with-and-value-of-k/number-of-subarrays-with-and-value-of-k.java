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
    public long countSubarrays(int[] nums, int k) {
        long ans = 0;
        HashMap<Integer, Integer> mp = new HashMap<>();
        for(int num:nums) {
            HashMap<Integer, Integer> mp2 = new HashMap<>();
            mp2.put( num, mp2.getOrDefault(num, 0)+1 );
            for( HashMap.Entry<Integer, Integer> entry : mp.entrySet() ) {
                int tmp = entry.getKey()&num;
                mp2.put(tmp, mp2.getOrDefault(tmp, 0)+entry.getValue());
            }
            ans += mp2.getOrDefault(k, 0);
            mp = mp2;
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
