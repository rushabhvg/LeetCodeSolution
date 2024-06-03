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
    public int appendCharacters(String s, String t) {
        int i=0, j=0, c=0;
        while(i<s.length() && j<t.length()) {
            if(s.charAt(i)==t.charAt(j)) {
                i++;
                j++;
            } else {
                i++;
            }
        }
        return t.length()-j;
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
