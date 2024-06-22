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
    public boolean isPalindrome(int x) {
        String str = Integer.toString(x);
        int st=0;
        int end = str.length()-1;
        while(st<=end) {
            if(str.charAt(st)!=str.charAt(end) ) return false;
            st++;
            end--;
        }
        return true;
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
