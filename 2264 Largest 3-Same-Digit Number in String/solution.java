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
    public String largestGoodInteger(String nums) {
        String ans = "";
        for(int i = 0; i < nums.length() - 2; i++) {
            if(nums.charAt(i) == nums.charAt(i + 1) && nums.charAt(i) == nums.charAt(i + 2)) {
                ans = ans.compareTo(nums.substring(i, i + 3)) > 0 ? ans : nums.substring(i, i + 3);
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
