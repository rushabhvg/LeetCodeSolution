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
    int maxSum(vector<int>& nums) {
        vector<vector<int>> arr(10, vector<int>(0));
        int maxSum = -1;
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i++) {
            // chk digit
            string str = to_string(nums[i]);
            char cr = '0';
            for(auto& c: str) {
                if(c>cr) {
                    cr = c;
                }
            }
            arr[int(cr)-48].push_back(nums[i]);
        }
        for(int i=9; i>=0; i--) {
            if(arr[i].size()>=2) {
                int n = arr[i].size();
                int n1 = arr[i][n-1], n2 = arr[i][n-2];
                maxSum = max(maxSum, n1+n2);
            }
        }
        return maxSum;
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
