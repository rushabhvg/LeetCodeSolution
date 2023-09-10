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
    int numberOfPoints(vector<vector<int>>& nums) {
        vector<int> a(101, 0);
        int cnt = 0;
        for(int i=0; i<nums.size(); i++) {
            for(int s=nums[i][0]; s<=nums[i][1]; s++) {
                a[s]++;
            }
        }
        for(int i=1; i<101; i++) {
            if(a[i]!=0) cnt++;
        }
        return cnt;
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
