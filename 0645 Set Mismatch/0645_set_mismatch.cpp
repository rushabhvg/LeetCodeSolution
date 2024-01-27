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
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        int xorAll = 0;
        int xorArr = 0;
        for(int i=1; i<=n; i++) {
            xorAll ^= i;
        }
        for(int num: nums) {
            xorArr ^= num;
        }
        int xorRes = xorArr ^ xorAll;
        int rmsb = xorRes & -xorRes;
        int xorSet = 0;
        int xorNotSet = 0;
        for(int i=1; i<=n; i++) {
            if(i&rmsb) xorSet ^= i;
            else xorNotSet ^= i;
        }
        for(int num:nums) {
            if(num & rmsb) {
                xorSet ^= num;
            } else {
                xorNotSet ^= num;
            }
        }
        for(int num : nums) {
            if(num==xorSet) {
                return {xorSet, xorNotSet};
            }
        }
        return {xorNotSet, xorSet};
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
