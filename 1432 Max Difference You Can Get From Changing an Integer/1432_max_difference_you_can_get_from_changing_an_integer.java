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
    public int maxDiff(int num) {
        String str = Integer.toString(num);
        char mxCh[] = str.toCharArray();
        char mnCh[] = str.toCharArray();

        char replaceMx = ' ';
        for(char c : mxCh) {
            if(c != '9') {
                replaceMx = c;
                break;
            }
        }

        for(int i = 0; i < mxCh.length; i++) {
            if(mxCh[i] == replaceMx) {
                mxCh[i] = '9';
            }
        }
        
        char replaceMn = mnCh[0];
        char replace = '1';
        if(replaceMn == '1') {
            for(int i = 1; i < mnCh.length; i++) {
                char c = mnCh[i];
                if(c != '1' && c != '0') {
                    replaceMn = c;
                    replace = '0';
                    break;
                }
            }
        }
        for(int i = 0; i < mnCh.length; i++) {
            if(mnCh[i] == replaceMn) {
                mnCh[i] = replace;
            }
        }

        int mxNum = Integer.parseInt(new String(mxCh));
        int mnNum = Integer.parseInt(new String(mnCh));

        return mxNum - mnNum;
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
