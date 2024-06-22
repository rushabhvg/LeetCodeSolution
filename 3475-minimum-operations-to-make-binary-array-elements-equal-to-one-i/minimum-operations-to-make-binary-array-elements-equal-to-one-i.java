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
    public int minOperations(int[] nums) {
        int mn = 0;
        int n = nums.length;
        for(int i=0; i<n-2; i++) {
            if(nums[i]==0) {
                mn++;
                nums[i]=1;
                nums[i+1] = nums[i+1]==1 ? 0 : 1;
                nums[i+2] = nums[i+2]==1 ? 0 : 1;
            }
            // System.out.println("\ni:" + i+"::" + nums[i]+", " + nums[i+1]+ ", " + nums[i+2]);
        }
        if(nums[n-3]==1 && nums[n-2]==1 && nums[n-1]==1) {
            return mn;
        }
        return -1;
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
