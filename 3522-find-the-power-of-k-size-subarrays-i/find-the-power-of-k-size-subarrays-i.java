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
    public int[] resultsArray(int[] nums, int k) {
        int n = nums.length;
        int[] ans = new int[n-k+1];
        for(int i=0; i<=n-k; i++) {
            boolean chk = true;
            for(int j=0; j<k-1; j++) {
                if(nums[i+1+j]-nums[i+j]!=1) {
                    // System.out.print("\nE: " + i + " " + j);
                    chk = false;
                    break;
                }
            }
            ans[i] = chk ? nums[i+k-1] : -1;
        }
        return ans;
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
