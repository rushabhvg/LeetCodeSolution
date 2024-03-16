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
    public int findMaxLength(int[] nums) {
        Map<Integer, Integer> mp = new HashMap<>();
        mp.put(0, -1);
        int mx = 0;
        int cnt = 0;
        for(int i=0; i<nums.length; i++) {
            cnt = cnt + (nums[i]==1 ? 1 : -1);
            if(mp.containsKey(cnt)) {
                mx = Math.max(mx, i-mp.get(cnt));
            } else {
                mp.put(cnt, i);
            }
        }
        return mx;
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
