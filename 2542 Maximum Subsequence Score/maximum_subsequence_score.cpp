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
    long long maxScore(vector<int>& nums1, vector<int>& nums2, int k) {
        int n = nums1.size();

        vector<pair<int, int>> pairs;
        
        for(int i =0; i<n; i++) {
            pairs.push_back( {nums2[i], nums1[i]} );
        }
        sort(pairs.rbegin(), pairs.rend());
        long long ans = 0;
        long long currSum = 0;
        priority_queue<int, vector<int>, greater<int>> pq;
        for(int i=0; i<k-1; i++) {
            currSum += pairs[i].second;
            pq.push(pairs[i].second);
        }
        for(int i=k-1; i<n; i++) {
            currSum += pairs[i].second;
            pq.push(pairs[i].second);
            ans = max(ans, currSum*pairs[i].first);
            currSum -= pq.top();
            pq.pop();
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
