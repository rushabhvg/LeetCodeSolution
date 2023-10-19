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
    bool backspaceCompare(string s, string t) {
        stack<char> cs, ct;
        for(int i=0; i<s.size(); i++) {
            if(s[i]!='#') cs.push(s[i]);
            if(s[i]=='#' && cs.size()>0) {
                cs.pop();
            }
            // cout<<i<< " " << cs.top() <<endl;
        }
        for(int i=0; i<t.size(); i++) {
            if(t[i]!='#') ct.push(t[i]);
            if(t[i]=='#' && ct.size()>0) {
                ct.pop();
            }
            // cout<<i<< " " << ct.top() << endl;
        }
        if(cs.size()!=ct.size()) return false;
        if(cs.size()==0) return true;
        int n = cs.size();
        for(int i=0; i<n; i++) {
            cout<<i<< " cs " << cs.top() <<endl;
            cout<<i<< " ct " << ct.top() <<endl;
            char c1 = cs.top();
            char c2 = ct.top();
            if(c1!=c2) return false;
            cs.pop();
            ct.pop();
        }
        return true;
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
