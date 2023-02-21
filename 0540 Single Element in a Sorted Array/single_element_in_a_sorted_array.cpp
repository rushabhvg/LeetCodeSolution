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
    int start = 0;
    int last;
    int mid;
public:
    void binSrch(vector<int>& nums) {
        while(start<last) {
            mid = start + (last-start)/2;
            if (nums[mid]==nums[mid^1]) {
                start = mid+1;
            } else {
                last = mid;
            }
        }
    }
    int singleNonDuplicate(vector<int>& nums) {
        last = nums.size();
        if(last==1) return nums[0];
        binSrch(nums);
        return nums[start];
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
