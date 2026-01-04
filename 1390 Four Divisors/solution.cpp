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
    int helperGetSumOfDivs(int num) {
        int sum = 0;
        int n = 0;
        for (int i = 1; i * i <= num; i++) {
            if (num % i == 0) {
                int d1 = i;
                int d2 = num / i;
                if (d1 == d2) {
                    n++;
                    sum += i;
                } else {
                    n += 2;
                    sum += d1 + d2;
                }
            }
            if (n > 4) {
                return 0;
            }
        }
        if (n != 4) {
            return 0;
        }
        return sum;
    }
    int sumFourDivisors(vector<int>& nums) {
        int ans = 0;
        for (int i = 0; i < nums.size(); i++) {
            ans += helperGetSumOfDivs(nums[i]);
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
