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
        if(n==1) {
            int arr[] = new int[1];
            arr[0] = nums[0];
            return arr;
        }
        int[] ans = new int[n];
        int[] res = new int[n-k+1];
        ans[0] = 1;
        System.out.print(ans[0]);
        for(int i=1; i<n; i++) {
            /* 
            n = 7, k=3
            0,1,2,3,4,5,6
            1,2,3,4,3,2,5
            1 2 3 4 0 0 0
            */
            ans[i] = nums[i]-nums[i-1]!=1 ? 1 : ans[i-1]+1;
            // System.out.print(" " + ans[i]);
        }
        int j=0;
        for(int i=k-1; i<n; i++) {
            res[j++] = ans[i]>=k ? nums[i] : -1;
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
