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
    public int[] getNoZeroIntegers(int n) {
        int[] ans = new int[2];
        for(int i = 1; i < n; i++) {
            int a = i;
            int b = n-i;
            String s1 = String.valueOf(a);
            String s2 = String.valueOf(b);
            if(s1.contains("0") || s2.contains("0")) {
                continue;
            } else {
                ans[0] = a;
                ans[1] = b;
                break;
            }
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
