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
    int ans = 0;

    bool chk(vector<int>& nums) {
        if (nums.size() < 2) return true;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] < nums[i - 1]) {
                return false;
            }
        }
        return true;
    }

    void removeArr(vector<int>& nums) {
        do {
            ans++;
            int minSum = nums[0] + nums[1];
            int p1 = 0;
            for (int i = 1; i < nums.size() - 1; i++) {
                int tmpSum = nums[i] + nums[i + 1];
                if (tmpSum < minSum) {
                    p1 = i;
                    minSum = tmpSum;
                }
            }
            nums[p1] = minSum;
            nums.erase(nums.begin() + p1 + 1);
        } while (!chk(nums));
    }

    int minimumPairRemoval(vector<int>& nums) {
        if (!chk(nums)) {
            removeArr(nums);
        }
        return ans;
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
