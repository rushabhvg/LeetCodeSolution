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
    public int smallestDistancePair(int[] nums, int k) {
        Arrays.sort(nums);
        int n = nums.length;
        int l = 0;
        int r = nums[n - 1] - nums[0];
        for (int cnt = 0; l < r; cnt = 0) {
            int m = l + (r - l) / 2;
            
            for (int i = 0, j = 0; i < n; i++) {
                while (j < n && nums[j] <= nums[i] + m) j++;
                cnt += j - i - 1;
            }
            
            if (cnt < k) {
                l = m + 1;
            } else {
                r = m;
            }
        }
        
        return l;
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
