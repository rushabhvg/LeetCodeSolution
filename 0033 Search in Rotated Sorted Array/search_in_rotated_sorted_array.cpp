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
    int bs(vector<int>& nums, int left, int right, int target) {
        while(left<=right) {
            int mid = left + (right-left)/2;
            if(nums[mid] == target) return mid;
            else if (nums[mid]>target) right = mid-1;
            else left = mid+1;
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int left=0, right = n-1;
        while(left<=right) {
            int mid = left + (right-left)/2;
            if (nums[mid]>nums[n-1]) {
                left = mid+1;
            } else {
                right = mid-1;
            }
        }
        int ans = bs(nums, 0, left-1, target);
        if(ans!=-1) return ans; 
        return bs(nums, left, n-1, target);
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
