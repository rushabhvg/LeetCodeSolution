/*
By Rushabh Gala
rushabhvg
GitHub:
https://github.com/rushabhvg
StackOverflow:
https://stackoverflow.com/users/16571212/rushabhvg
LinkedIn:
https://www.linkedin.com/in/rushabhvg/
*/

class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        int ans = 0;
        int n = nums.size();
        if (n == 1) return 0;
        sort(nums.begin(), nums.end());
        if ((long long) nums[0] * k >= (long long) nums[n - 1]) {
            return 0;
        }
        if (n == 2) return 1;
        int st = 0, end = 0;
        for (; end < n; end++) {
            while((long long) nums[end] > (long long) nums[st] * k) st++;
            ans = max(ans, end - st + 1);
        }
        return n - ans;
    }
};

/*
By Rushabh Gala
rushabhvg
GitHub:
https://github.com/rushabhvg
StackOverflow:
https://stackoverflow.com/users/16571212/rushabhvg
LinkedIn:
https://www.linkedin.com/in/rushabhvg/
*/
