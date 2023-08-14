
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
    int minAbsoluteDifference(vector<int>& nums, int x) {
        int n = nums.size();
        set<int> st;
        int ans = INT_MAX;
        for(int i=x;i<n;i++){
            st.insert(nums[i-x]);
            auto it = st.lower_bound(nums[i]);
            if(it!=st.end())  ans = min(ans, abs(nums[i]-*(it)));
            if(it!=st.begin()){
                --it;
                ans = min(ans, abs(nums[i]-*(it)));
            }
        }
        return ans;  
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
