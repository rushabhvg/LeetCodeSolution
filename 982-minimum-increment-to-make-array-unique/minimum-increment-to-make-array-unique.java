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
    public int minIncrementForUnique(int[] nums) {
        if(nums.length==1) return 0;
        Arrays.sort(nums);
        int mnVal = 0;
        int numTrck = 0;
        for(int i=0; i<nums.length; i++) {
            numTrck = Math.max(numTrck, nums[i]);
            mnVal += numTrck - nums[i];
            numTrck+=1;
        }

        return mnVal;
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
