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
    public int minMaxDifference(int num) {
        String str = Integer.toString(num);
        char[] mxCh = str.toCharArray();
        char[] mnCh = str.toCharArray();

        char replaceMx = ' ';
        for(char c:mxCh) {
            if(c!='9') {
                replaceMx = c;
                break;
            }
        }

        for(int i=0; i<mxCh.length; i++) {
            if(mxCh[i]==replaceMx) {
                mxCh[i] = '9';
            }
        }

        char repalceMn = mnCh[0];
        for(int i = 0; i < mnCh.length; i++) {
            if (mnCh[i] == repalceMn) {
                mnCh[i] = '0';
            }
        }

        int mxVal = Integer.parseInt(new String(mxCh));
        int mnVal = Integer.parseInt(new String(mnCh));

        return mxVal - mnVal;
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
