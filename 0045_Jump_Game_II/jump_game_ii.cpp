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
    int jump(vector<int>& nums) {
        int n = nums.size();
        int currEnd=0;
        int currFar=0;
        int jumps=0;
        for(int i=0; i<n-1; ++i) {
            currFar = max(currFar, i+nums[i]);
            if(i==currEnd) {
                jumps++;
                currEnd = currFar;
            }
        }
        return jumps;
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
