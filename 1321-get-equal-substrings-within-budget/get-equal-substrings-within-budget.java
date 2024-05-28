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
    public int equalSubstring(String s, String t, int maxCost) {
        int left = 0, right;
        for(right = 0; right<s.length(); right++) {
            maxCost -= Math.abs(s.charAt(right) - t.charAt(right));
            if(maxCost<0) {
                maxCost += Math.abs(s.charAt(left) - t.charAt(left++));
            }
        }
        return right-left;
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
