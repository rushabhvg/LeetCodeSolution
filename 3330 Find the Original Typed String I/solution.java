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
    public int possibleStringCount(String word) {
        char[] ch = word.toCharArray();
        int ans = 1;
        int cnt = 1;
        for(int i = 1; i < ch.length; i++) {
            // System.out.print("i: " + i + " : " + cnt);
            if(ch[i] != ch[i-1]) {
                ans += cnt > 1 ? cnt - 1 : 0;
                cnt = 1;
            } else {
                cnt++;
            }
            // System.out.print(" => " + cnt + "\n");
        }
        int n = ch.length;
        if(n==1) return 1;
        if(ch[n-2] == ch[n-1]) {
            ans += cnt - 1;
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
