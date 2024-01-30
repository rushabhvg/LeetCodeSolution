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
    int maximumLength(vector<int>& nums) {
        long long ans = 0;
        map<int, int> mp;
        
        for(int i=0; i<nums.size(); i++) {
            mp[nums[i]]++;
        }
        
        for(auto[k,f] : mp) {
            long long t = k, cnt = 0;

            if(t==1) {
                cnt += mp[t];
                mp[1] = 0;
            }

            while(t<INT_MAX && mp[t]>0) {
                cnt += 2;
                if(mp[t]<=1) break;
                mp[t] = 0;
                t *= t;
            }

            if(cnt%2==0) cnt--;
            ans = max(ans, cnt);
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
