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
    void nextPermutation(vector<int>& nums) {
        if(nums.size()==1) return;
        int lessThan = -1;
        int idx = -1;
        for(int i=nums.size()-2; i>=0; i--) {
            if(nums[i]<nums[i+1]) {
                lessThan = i;
                break;
            }
        }
        if(lessThan == -1) {
            reverse(nums, 0);
        } else {
            for(int i=nums.size()-1; i>=0; i--) {
                if(nums[i]>nums[lessThan]) {
                    idx = i;
                    break;
                }
            }
            swap(nums, lessThan, idx);
            reverse(nums, lessThan+1);
        }
    }
    void swap(vector<int>& nums, int i, int j) {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }
    void reverse(vector<int>& nums, int s) {
        int i = s;
        int j = nums.size()-1;
        while(i<j) {
            swap(nums, i, j);
            i++;
            j--;
        }
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
