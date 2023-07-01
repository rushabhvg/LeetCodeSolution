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
    int dfs(int i, vector<int>& distribute, vector<int>& cookies, int k, int zeroCount) {
        if(cookies.size()-i<zeroCount) {
            return INT_MAX;
        }
        if(i==cookies.size()) return *max_element(distribute.begin(), distribute.end());
        int ans = INT_MAX;
        for(int j=0; j<k; j++) {
            zeroCount -= distribute[j]==0?1:0;
            distribute[j]+=cookies[i];
            ans = min(ans, dfs(i+1, distribute, cookies, k, zeroCount));
            distribute[j]-=cookies[i];
            zeroCount+=distribute[j]==0?1:0;
        }
        return ans;
    }
    int distributeCookies(vector<int>& cookies, int k) {
        vector<int> childArr(k);
        return dfs(0, childArr, cookies, k, k);
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
