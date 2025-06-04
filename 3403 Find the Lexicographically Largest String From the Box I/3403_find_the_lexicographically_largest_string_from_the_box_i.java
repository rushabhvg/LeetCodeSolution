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
    public String answerString(String word, int numFriends) {
        if(numFriends == 1) return word;
        String res = "";
        int len = word.length() - numFriends + 1;
        for(int i=0; i<word.length(); i++) {
            String temp;
            if(i+len <= word.length()) {
                temp = word.substring(i, i+len);
            } else {
                temp = word.substring(i);
            }
            if(temp.compareTo(res)>0) {
                res = temp;
            }
        }
        return res;
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
