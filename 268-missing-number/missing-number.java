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
    public int missingNumber(int[] nums) {
        int n = nums.length;
        int[] arr = new int[n+1];
        for(int i=0; i<n; i++) {
            arr[nums[i]]++;
        }
        for(int i=0; i<=n; i++) {
            if(arr[i]==0) return i;
        }
        return 0; // /DUMMY
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
