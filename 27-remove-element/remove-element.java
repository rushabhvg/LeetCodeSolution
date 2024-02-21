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
    public int removeElement(int[] nums, int val) {
        int last = nums.length-1;
        
        while(last>0 && nums[last] == val) last--;
        if(last==0) return nums[0]==val ? 0 : 1;

        for(int i=0; i<nums.length; i++) {
            if(nums[i]==val) {
                nums[i] = nums[last--];
                while(last>i && nums[last] == val) last--;
            }
            if(last<=i) break;
        }
        return last+1;
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