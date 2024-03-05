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
    public int minimumLength(String s) {
        int idxSt = 0;
        int idxEnd = s.length()-1;
        while(idxSt<idxEnd && (s.charAt(idxSt) == s.charAt(idxEnd) ) ) {
            char c = s.charAt(idxSt);
            while(idxSt<=idxEnd && s.charAt(idxSt) == c ) idxSt++;
            while(idxEnd>idxSt && s.charAt(idxEnd) == c ) idxEnd--;
        }
        return (idxEnd-idxSt)+1; 
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