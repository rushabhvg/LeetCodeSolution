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
    int longestSubarray(vector<int>& nums) {
        int zc=0;
        int lw=0;
        int start=0;
        for(int i=0; i<nums.size(); i++) {
            zc+=(nums[i]==0);
            while(zc>1) {
                zc-=(nums[start]==0);
                start++;
            }
            lw = max(lw, i-start);
        }
        return lw;
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
