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
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        vector<int> dp(366, 0);
        unordered_set<int> travel(days.begin(), days.end());

        for (int i = 1; i <= 365; ++i) {
            if (travel.count(i) == 0) { 
                dp[i] = dp[i-1];
            } else {
                dp[i] = min(dp[i-1] + costs[0], 
                            min(dp[max(0, i-7)] + costs[1], dp[max(0, i-30)] + costs[2]));
            }
        }
        return dp[365];
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
