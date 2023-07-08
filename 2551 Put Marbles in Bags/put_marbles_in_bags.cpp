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
    long long putMarbles(vector<int>& weights, int k) {
        int n=weights.size();
        if(n==k) return 0;
        vector<int> pairWeights(n-1, 0);
        for(int i=0; i<n-1; i++) pairWeights[i]+=weights[i]+weights[i+1];
        sort(pairWeights.begin(), pairWeights.end());
        long long ans=0;
        for(int i=0; i<k-1; i++) ans+=pairWeights[n-2-i]-pairWeights[i];
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
