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
    public int longestConsecutive(int[] nums) {
        int ans = 0;
        HashMap<Integer, Integer> mp = new HashMap<Integer, Integer>();
        for(int n:nums) {
            if(!mp.containsKey(n)) {
                int left = mp.containsKey(n-1) ? mp.get(n-1) : 0;
                int right = mp.containsKey(n+1) ? mp.get(n+1) : 0;
                int sum = left+right+1;
                mp.put(n, sum);
                ans = Math.max(ans, sum);
                mp.put(n-left, sum);
                mp.put(n+right, sum);
            }
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
