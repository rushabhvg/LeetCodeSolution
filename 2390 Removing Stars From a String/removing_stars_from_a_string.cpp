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

class Solution {
public:
    string removeStars(string s) {
        stack<char> stkChar;
        int n = s.size();
        int cnt = 0;
        for(int i=0; i<s.size(); i++) {
            if(s[i]!='*') {
                stkChar.push( s[i] );
            } else {
                stkChar.pop();
            }
        }
        s = "";
        while(!stkChar.empty()) {
            s.push_back(stkChar.top());
            stkChar.pop();
        }
        reverse(s.begin(), s.end());
        return s;
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
