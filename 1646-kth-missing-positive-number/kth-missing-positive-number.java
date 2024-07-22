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
    public int findKthPositive(int[] arr, int k) {
        int idx = 0;
        int cnt = 0;
        for(int i:arr) {
            if(i==idx+1) {
                idx++;
            }
            while(idx<i-1) {
                idx++;
                cnt++;
                if(cnt==k) {
                    return idx;
                }
            }
            idx = i;
        }
        while(cnt<k) {
            idx++;
            cnt++;
        }
        return idx;
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
