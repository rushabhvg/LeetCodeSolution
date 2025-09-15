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
    public int canBeTypedWords(String text, String brokenLetters) {
        boolean[] brk = new boolean[26];
        for(char c: brokenLetters.toCharArray()) {
            brk[c - 'a'] = true;
        }

        String[] wrds = text.split(" ");
        int cnt = 0;
        for(String wrd : wrds) {
            boolean can = true;
            for(char c : wrd.toCharArray()) {
                if(brk[c - 'a']) {
                    can = false;
                    break;
                }
            }
            if(can) cnt++;
        }
        return cnt;
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
