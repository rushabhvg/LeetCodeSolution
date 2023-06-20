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
    vector<int> getAverages(vector<int>& nums, int k) {
        vector<int> avgVal(nums.size(), -1);
        if(nums.size()<=k*2) return avgVal;
        if(k==0) return nums;
        long long sumK=0;
        long long avgK=-1;
        for(int i=0; i<=k*2; i++) {
            sumK+=nums[i];
        }
        // cout<<nums[k];
        // cout<<" "<<sumK;
        avgK = sumK/((k*2)+1);
        // cout<<" "<<avgK;
        avgVal[k]=avgK;
        for(int i=k+1; i<nums.size()-k; i++) {
            // cout<<endl<<nums[i];
            sumK = sumK - nums[i-k-1] + nums[(k*2)+(i-k)];
            // cout<<" "<<sumK<<" ("<<nums[i-k-1]<<" "<<nums[(k*2)+1]<<")";
            avgK = sumK/((k*2)+1);
            // cout<<" "<<avgK;
            avgVal[i] = avgK;
        }
        return avgVal;
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
