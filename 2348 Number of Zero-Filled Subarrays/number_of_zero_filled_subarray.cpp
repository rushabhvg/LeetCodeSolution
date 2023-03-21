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
    vector<long long> arr;
    long long zeroFilledSubarray(vector<int>& nums) {
        long long count = 0;
        long long zeroes = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                zeroes++;
            } else {
                count += (zeroes * (zeroes + 1)) / 2;
                zeroes = 0;
            }
        }
        count += (zeroes * (zeroes + 1)) / 2;
        return count;
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
