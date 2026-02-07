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
public:
    int minimumDeletions(string s) {
        int ans = 0, cntB = 0;
        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];
            if (ch == 'b') {
                cntB++;
            } else {
                ans = min(ans + 1, cntB);
            }
        }
        return ans;
    }
};

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
