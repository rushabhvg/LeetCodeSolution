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
private:
public:
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
        int n = startTime.size();
        vector<pair<int, int>> arr(n);
        for(int i=0; i<n; i++) arr[i] = {startTime[i], i};
        sort(arr.begin(), arr.end());
        vector<int> dp(n+1, 0);
        for(int i=n-1; i>=0; i--) {
            dp[i] += max(dp[i+1], 
                profit[arr[i].second] + dp[lower_bound(arr.begin()+i, arr.end(), make_pair(endTime[arr[i].second], 0)) - arr.begin()]);
        }
        return dp[0];
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
