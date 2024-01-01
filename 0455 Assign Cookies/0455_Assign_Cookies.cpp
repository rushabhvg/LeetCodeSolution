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
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int gs = g.size(), ss = s.size();
        int mx = min(gs, ss);
        int cnt = 0;
        int si=0, gi=0;
        for(; gi<gs && si<ss; gi++, si++) {
            while(si<ss && s[si]<g[gi]) {
                si++;
            }
            if(si>=ss) break;
            if(s[si]>=g[gi]) {
                cnt++;
            }
        }
        return cnt;
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
