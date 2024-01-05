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
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        int l = 1;
        vector<int> temp;
        temp.push_back(nums[0]);
        for(int i=1; i<n; i++) {
            if(temp.back()<nums[i]) {
                temp.push_back(nums[i]);
                l++;
            } else {
                int idx = lower_bound(temp.begin(), temp.end(), nums[i])-temp.begin();
                temp[idx] = nums[i];
            }
        }
        return l;
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
