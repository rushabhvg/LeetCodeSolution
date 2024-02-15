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
private:
    vector<long long> numsSide;
    int n;

    void initPoly(const vector<int>& nums) {
        numsSide.push_back(0);
        for(int i=1; i<=n; i++) {
            numsSide.push_back(nums[i-1] + numsSide[i-1]);
        }
        return ;
    }

    long long findPeri(const vector<int>& nums) {
        for(int i=n-1; i>=2; i--) {
            if(nums[i] < numsSide[i]) return ( numsSide[i] + (long long) nums[i] );
        }
        return -1;
    }

public:
    long long largestPerimeter(vector<int>& nums) {
        n = nums.size();
        sort(nums.begin(), nums.end());
        initPoly(nums);
        return findPeri(nums);
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
