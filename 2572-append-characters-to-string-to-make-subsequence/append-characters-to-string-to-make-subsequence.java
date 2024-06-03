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
        if(s.equals(t)) return 0;
        char arrS[] = s.toCharArray();
        char arrT[] = t.toCharArray();
        int i=0, j=0, m=arrS.length, n=arrT.length;
        for( ; i<m; i++) {
            if(arrS[i] == arrT[j]) j++;
            if(j==n) return 0;
        }
        return n-j;
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
