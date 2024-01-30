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
    int minOrAfterOperations(vector<int>& nums, int k) {
        int n = nums.size();
        int ans=0;
        for(int j=30; j>=0; j--) {
            int cnt = 0;
            int curr = (1<<30) - 1;
            int tgt = ans | ( (1<<j) - 1 );
            for(int& x : nums) {
                curr &= x;
                if( (curr | tgt) == tgt ) {
                    cnt++;
                    curr = (1<<30) - 1;
                }
            }
            if(n-cnt>k) {
                ans |= (1<<j);
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
