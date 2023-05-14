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
    int maxScore(vector<int>& nums) {
        int maxStates = 1 << nums.size();
        int finalMask = maxStates - 1;
        vector<int> dp(maxStates);
        for(int state = finalMask; state>=0; state--) {
            if(state==finalMask) {
                dp[state] = 0;
                continue;
            }
            int numTakes = __builtin_popcount(state);
            int pairsFormed = numTakes / 2;
            if(numTakes%2) continue;
            for(int firstIdx = 0; firstIdx < nums.size(); firstIdx++) {
                for(int secondIdx = firstIdx+1; secondIdx<nums.size(); secondIdx++) {
                    if( ( (state>>firstIdx) & 1) == 1 || ( (state>>secondIdx) & 1) == 1) {
                        continue;
                    }
                    int currScore = (pairsFormed+1) * __gcd(nums[firstIdx], nums[secondIdx]);
                    int stateAfterPickingCurrPair = state | (1<<firstIdx) | (1<<secondIdx);
                    int remainingScore = dp[stateAfterPickingCurrPair];
                    dp[state] = max(dp[state], currScore + remainingScore);
                }
            }
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
