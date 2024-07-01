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
    public boolean threeConsecutiveOdds(int[] arr) {
        int cnt=0;
        for(int i=0; i<arr.length; i++) {
            if(arr[i]%2==1) {
                cnt++;
            } else {
                cnt = 0;
            }
            if(cnt>=3) {
                return true;
            }
        }
        return false;
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
