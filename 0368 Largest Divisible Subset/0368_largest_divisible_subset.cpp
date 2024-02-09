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
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        int n = nums.size();
        if(n<2) return nums;
        sort(nums.begin(), nums.end());
        vector<int> arr(n, 0);
        vector<int> parent(n, 0);
        int m=0;
        int mi=0;
        for(int i=n-1; i>=0; i--) {
            for(int j=i; j<nums.size(); j++) {
                if(nums[j]%nums[i]==0 && arr[i]<1+arr[j]) {
                    arr[i] = 1 + arr[j];
                    parent[i] = j;
                    if(arr[i]>m) {
                        m = arr[i];
                        mi = i;
                    }
                }
            }
        }
        vector<int> ans;
        for(int i=0; i<m; i++) {
            ans.push_back(nums[mi]);
            mi = parent[mi];
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
