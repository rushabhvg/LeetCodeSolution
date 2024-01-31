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
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        if(n==1) return {0};
        stack<int> stk;
        vector<int> ans(n, 0);
        stk.push(n-1);
        for(int i=n-2; i>=0; i--) {
            while(stk.size() && temperatures[stk.top()] <= temperatures[i]) {
                stk.pop();
            }
            if(stk.size()) {
                ans[i] = stk.top()-i;
            }
            stk.push(i);
        }
        return ans;
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
