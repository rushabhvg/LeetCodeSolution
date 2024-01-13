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
    bool halvesAreAlike(string s) {
        int t = 0;
        for(int i=0; i<s.size(); i++) {
            s[i]=tolower(s[i]);
            if(i<s.size()/2) {
                if(s[i]==97 || s[i]==101 || s[i]==105 || s[i]==111 || s[i]==117 )
                    t++;
            } else {
                if(s[i]==97 || s[i]==101 || s[i]==105 || s[i]==111 || s[i]==117 )
                    t--;
            }
        }
        return t==0;
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
