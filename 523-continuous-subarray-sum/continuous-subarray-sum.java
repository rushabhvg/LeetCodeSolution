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
    public boolean checkSubarraySum(int[] nums, int k) {
        int n = nums.length;
        Map<Integer, Integer> remMp = new HashMap<>();
        remMp.put(0, -1);
        int sum = 0;
        for(int i=0; i<n; i++) {
            sum += nums[i];
            int rem = sum%k;
            if(remMp.containsKey(rem)) {
                if(i-remMp.get(rem)>1) return true;
            } else {
                remMp.put(rem, i);
            }
        }
        return false;
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
