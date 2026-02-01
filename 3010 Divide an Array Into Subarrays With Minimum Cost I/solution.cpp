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
    int minimumCost(vector<int>& nums) {
        int mn1 = 51, mn2 = 51;
        int n = nums.size();
        if (n == 3) return nums[0] + nums[1] + nums[2];
        for (int i = 1; i < n; i++) {
            int tmp = nums[i];
            if (tmp < mn1) {
                mn2 = mn1;
                mn1 = tmp;
            } else if (tmp < mn2) {
                mn2 = tmp;
            }
        }
        return nums[0] + mn1 + mn2;
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
