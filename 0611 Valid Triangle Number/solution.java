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
    public int triangleNumber(int[] nums) {
        Arrays.sort(nums);
        int n = nums.length;
        int cnt = 0;
        for(int i = n - 1; i >= 2; i--) {
            int left = 0, right = i - 1;
            while(left < right) {
                if(nums[left] + nums[right] > nums[i]) {
                    cnt += right - left;
                    right--;
                } else {
                    left++;
                }
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
