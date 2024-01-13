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
    int search(vector<int>& nums, int target) {
        int low = 0, high = nums.size()-1;
        while(low<high) {
            int mid = low + (high-low)/2;
            if(nums[mid]>nums[high]) low = mid+1;
            else high = mid;
        }
        int rotate = low;
        low = 0;
        high = nums.size()-1;
        while(low<=high) {
            int mid = low + (high-low)/2;
            int rm = (mid+rotate)%nums.size();
            if(nums[rm] == target) return rm;
            if(nums[rm]<target) low = mid+1;
            else high = mid-1;
        }
        return -1;
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
 
