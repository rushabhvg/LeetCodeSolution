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
    int countMatchingSubarrays(vector<int>& nums, vector<int>& pattern) {
        int ans = 0;
        int n = nums.size();
        int m = pattern.size()+1;
        for(int i=0; i<=n-m; i++) {
            vector<int> aux;
            for(int j=i; j<i+m; j++) {
                aux.push_back(nums[j]);
            }
            int j;
            for(j=0; j<m-1; j++) {
                if(pattern[j]==1 && aux[j+1]<=aux[j]) break;
                if(pattern[j]==0 && aux[j+1]!=aux[j]) break;
                if(pattern[j]==-1 && aux[j+1]>=aux[j]) break;
            }
            if(j==m-1) ans++;
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
