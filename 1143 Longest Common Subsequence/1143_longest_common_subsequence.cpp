/*
BY RUSHABH GALA
rushabhvg
GitHub :
https://github.com/rushabhvg
StackOverflow :
https://stackoverflow.com/users/16571212/rushabhvg
LinkedIn:
https://www.linkedin.com/in/rushabhvg/
*/

static const int _ = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();

class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        short m[1001][1001] = {};
        for(auto i=0; i<text1.size(); i++) {
            for(auto j=0; j<text2.size(); j++) {
                m[i+1][j+1] = text1[i]==text2[j] ? m[i][j]+1 : max(m[i+1][j], m [i][j+1]);
            }
        }
        return m[text1.size()][text2.size()];
    }
};

/*
BY RUSHABH GALA
rushabhvg
GitHub :
https://github.com/rushabhvg
StackOverflow :
https://stackoverflow.com/users/16571212/rushabhvg
LinkedIn:
https://www.linkedin.com/in/rushabhvg/
*/
