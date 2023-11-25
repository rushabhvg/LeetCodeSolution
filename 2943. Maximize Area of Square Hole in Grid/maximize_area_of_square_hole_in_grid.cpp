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
    int chk(vector<int>& bars) {
        sort(bars.begin(), bars.end());
        int prev=1, cnt=1, res=1;
        for(int i=0; i<bars.size(); i++) {
            cnt = (prev+1==bars[i]) ? cnt+1 : 2;
            prev = bars[i];
            res = max(res, cnt);
        }
        return res;
    }
    int maximizeSquareHoleArea(int n, int m, vector<int>& hBars, vector<int>& vBars) {
        int ans = min(chk(hBars), chk(vBars));
        return ans*ans;
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
