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
    public int numSubarraysWithSum(int[] nums, int goal) {
        int i = 0;
        int cnt = 0;
        int res = 0;
        for(int j=0; j<nums.length; j++) {
            if(nums[j]==1) {
                goal--;
                cnt = 0;
            }

            while(goal==0 && i<=j) {
                goal += nums[i];
                i++;
                cnt++;
                if(i>j-goal+1) {
                    break;
                }
            }

            while(goal<0) {
                goal += nums[i];
                i++;
            }

            res += cnt;
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
