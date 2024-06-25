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
    public void rotate(int[] nums, int k) {
        int n = nums.length;
        while(k>=n) {
            k -= n;
        };
        if(k==0) return ;
        int[] arr = new int[(2*n)-1];
        for(int i=0; i<arr.length; i++) {
            arr[i] = nums[i%n];
        }
        int st = n-k;
        for(int i=0; i<n; i++) {
            nums[i] = arr[st+i];
        }
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
