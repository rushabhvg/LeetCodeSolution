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
    bool isValid (vector<int>& price, int taste, int k) {
        int n = price.size();
        int prev = price[0];
        int k1 = k-1;
        for(int i=1; i<n && k1>0; i++) {
            if(prev+taste<=price[i]) {
                k1--;
                prev=price[i];
            }
        }
        if(k1==0) return true;
        return false;
    }
    int maximumTastiness(vector<int>& price, int k) {
        sort(price.begin(), price.end());
        int ans=0;
        int low=0;
        int n = price.size();
        int high=price[n-1]-price[0];
        while(low<=high) {
            int mid = (low+high)/2;
            if(isValid(price, mid, k)) {
                ans = max(ans, mid);
                low=mid+1;
            } else {
                high=mid-1;
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
