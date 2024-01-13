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
    int singleNonDuplicate(vector<int>& nums) {
        // if(nums.size()==1) return nums[0];
        int low = 0;
        int high = nums.size()-1;
        while(low<high) {
            int mid = low + (high-low)/2;
            if( (mid%2==0 && nums[mid]==nums[mid+1] ) || ( mid%2==1 && nums[mid]==nums[mid-1] ) ) low = mid+1;
            else high = mid;
        }
        return nums[low];
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
