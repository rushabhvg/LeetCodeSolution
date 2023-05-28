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
    long long maxStrength(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        bool nz = false;
        long long prod = 1;
        int n=-1;
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i++) {
            if(nums[i]<0) n=i;
            if(nums[i]>0) {
                prod*=nums[i];
                nz = true;
            }
        }
        if(nz==false && n<1) return 0;
        if(n<1) return prod;
        if(n%2==0) {
            for(int i=0; i<=n-1; i++) {
                prod *= nums[i];
            }
        } else {
            for(int i=0; i<=n; i++) {
                prod *= nums[i];
            }
        }
        return prod;
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
