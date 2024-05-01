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
    public String reversePrefix(String word, char ch) {
        int i=0;
        int n = word.length();
        for(i=0; i<n; i++) {
            if(word.charAt(i)==ch) break;
        }
        if(i>=n) return word;
        StringBuilder str = new StringBuilder();
        int t=i;
        for(int j = i; j>=0; j--) {
            str.append(word.charAt(j));
        }
        for(t = (t+1); t<n; t++) {
            str.append(word.charAt(t));
        }
        return str.toString();
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
