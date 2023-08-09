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
    int cntValid(vector<int>& nums, int t) {
        int idx=0, cnt=0;
        while(idx<nums.size()-1) {
            if(nums[idx+1]-nums[idx]<=t) {
                cnt++;
                idx++;
            }
            idx++;
        }
        return cnt;
    }
    int minimizeMax(vector<int>& nums, int p) {
        if(p==0) return 0;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int left = 0, right = nums[n-1]-nums[0];
        while(left<right) {
            int mid = left + (right-left)/2;
            if(cntValid(nums, mid)>=p) right = mid;
            else left = mid+1;
        }
        return left;
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
