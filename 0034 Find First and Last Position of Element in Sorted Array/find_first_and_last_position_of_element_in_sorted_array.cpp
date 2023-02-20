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
    int lowerBound(vector<int>& nums, int target, int low, int high) {
        int mid;
        while(low<=high) {
            mid = low + (high-low)/2;
            if(nums[mid]<target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return low;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans(2, -1);
        if(nums.size()==0) return ans;
        int firstOcr = lowerBound(nums, target, 0, nums.size()-1);
        int lastOcr = lowerBound(nums, target+1, 0, nums.size()-1)-1;
        if(firstOcr < nums.size() && nums[firstOcr]==target) {
            return {firstOcr, lastOcr};
        }
        return ans;
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
