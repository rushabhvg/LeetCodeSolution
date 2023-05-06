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
    int numSubseq(vector<int>& nums, int target) {
        const int mod = 1e9 + 7;
        const int n = nums.size();
        sort(nums.begin(), nums.end());
        int i = 0, j = n - 1;
        int ans = 0;
        vector<int> pow2(n, 1);
        for (int k = 1; k < n; k++) {
            pow2[k] = pow2[k - 1] * 2 % mod;
        }
        while (i <= j) {
            if (nums[i] + nums[j] > target) {
                j--;
            } else {
                ans = (ans + pow2[j - i]) % mod;
                i++;
            }
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
