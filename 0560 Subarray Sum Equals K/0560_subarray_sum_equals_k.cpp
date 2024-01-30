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
public:
    int subarraySum(vector<int>& nums, int k) {
        int cnt = 0;
        vector<int> sum(nums.size()+1, 0);
        for(int i=1; i<=nums.size(); i++) {
            sum[i] = sum[i-1] + nums[i-1];
        }
        for(int i=0; i<nums.size(); i++) {
            for(int j=i+1; j<=nums.size(); j++) {
                if(sum[j]-sum[i] == k) cnt++;
            }
        }
        return cnt;
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
