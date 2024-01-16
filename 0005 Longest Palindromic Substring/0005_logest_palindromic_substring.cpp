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
    string longestPalindrome(string s) {
        int resStart=0, resLen = 1;
        if(s.size()==1) return s;
        int si = 0;
        for(int i=0; i<s.size(); i++) {
            si = i;
            while(i+1<s.size() && s[i]==s[i+1]) i++;
            int end = i+1;
            si--;
            while(si>=0 && end<s.size() && s[si]==s[end]) {
                si--;
                end++;
            }
            si++;
            end--;
            if(resLen<end-si+1) {
                resLen = end-si+1;
                resStart = si;
            }
        }

        return s.substr(resStart, resLen);
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
