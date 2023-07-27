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
    int minimumIndex(vector<int>& nums) {
        int n = nums.size();
        vector<pair<int, int>> arrL, arrR;
        int x;
        map<int, int> m;
        int s=0;
        for(int i=0; i<n; i++) {
            m[nums[i]]++;
            if(m[nums[i]]>s) {
                s = m[nums[i]];
                x = nums[i];
            }
            arrL.push_back({s,x});
        }
        m.clear();
        s=0; x=0;
        for(int i=n-1; i>=0; i--) {
            m[nums[i]]++;
            if(m[nums[i]]>s) {
                s = m[nums[i]];
                x = nums[i];
            }
            arrR.push_back({s,x});
        }
        reverse(arrR.begin(), arrR.end());
        for(int i=0; i<n-1; i++) {
            pair<int, int> a = arrL[i];
            pair<int, int> b = arrR[i+1];
            if(a.second == b.second && (a.first*2)>(i+1) && (b.first*2)>(n-(i+1))) {
                return i;
            }
        }
        return -1;
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
