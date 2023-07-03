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
    bool buddyStrings(string s, string goal) {
        if(s.size()<2 || s.size()!=goal.size()) return false;

        vector<int> t1(26, 0), t2(26, 0);
        int diff=0;

        for(int i=0; i<s.size(); i++) {
            t1[s[i]-97]++;
            t2[goal[i]-97]++;
            if(s[i]!=goal[i]) diff++;
        }
        
        if(s==goal) {
            for(int i=0; i<26; i++) {
                if(t1[i]>1) return true;
            }
            return false;
        }
        if(s.size()==2) {
            if(s[0]==goal[0] && s[1]==goal[1] && s[0]!=s[1]) return false;
        }
        for(int i=0; i<26; i++) {
            if(t1[i]!=t2[i]) return false;
        }
        if(diff>2) return false;
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
