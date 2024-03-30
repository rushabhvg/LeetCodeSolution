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
    public int slide(int[] nums, int k) {
        int n = nums.length;
        int i = 0;
        int j = 0;
        int cnt = 0;
        HashMap<Integer, Integer> mp = new HashMap<>();
        while(j<n) {
            mp.put(nums[j], mp.getOrDefault(nums[j], 0) + 1);
            while(mp.size()>k) {
                mp.put(nums[i], mp.get(nums[i]) - 1);
                if(mp.get(nums[i]) == 0) mp.remove(nums[i]);
                i++;
            }
            cnt += j-i+1;
            j++;
        }
        return cnt;
    }
    public int subarraysWithKDistinct(int[] nums, int k) {
        return slide(nums, k) - slide(nums, k-1);
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
