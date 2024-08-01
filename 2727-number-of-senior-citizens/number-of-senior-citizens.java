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
    public int countSeniors(String[] details) {
        int cnt = 0;
        for(int i=0; i<details.length; i++) {
            char ch = details[i].charAt(11);
            if(ch<'6') continue;
            if(ch=='6') {
                char c2 = details[i].charAt(12);
                if(c2<'1') continue;
                cnt++;
                continue;
            }
            cnt++;
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
