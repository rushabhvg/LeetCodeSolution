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
    public int subarraysDivByK(int[] nums, int k) {
        HashMap<Integer, Integer> mp = new HashMap<>();
        mp.put(0, 1);
        int prfx = 0;
        int cnt =0;
        for(int i=0; i<nums.length; i++) {
            prfx += nums[i];
            int rmdr = prfx%k;
            if(rmdr<0) {
                rmdr += k;
            }
            if(mp.containsKey(rmdr)) {
                cnt += mp.get(rmdr);
                mp.put(rmdr, mp.get(rmdr)+1);
            } else {
                mp.put(rmdr, 1);
            }
        }
        return cnt;
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
