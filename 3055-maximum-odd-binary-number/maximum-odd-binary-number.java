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
    public String maximumOddBinaryNumber(String s) {
        int no = 0;
        StringBuilder ans = new StringBuilder();
        for(int i=0; i<s.length(); i++) {
            if(s.charAt(i)=='1') no++;
        }
        int i=0;
        while(no-- >1) {
            ans.append('1');
            i++;
        }
        while(i<s.length()-1) {
            ans.append('0');
            i++;
        }
        ans.append('1');
        return ans.toString();
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