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
    public boolean isPalindrome(String s) {
        StringBuilder str = new StringBuilder();
        int n = s.length();
        for(int i=0; i<n; i++) {
            char ch = s.charAt(i);
            if(Character.isLetterOrDigit(ch)) {
                str.append(Character.toLowerCase(ch));
            }
        }
        System.out.println(str);
        StringBuilder str2 = new StringBuilder(str);
        str2.reverse();
        System.out.println(str2);
        return str.toString().equals(str2.toString());
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
