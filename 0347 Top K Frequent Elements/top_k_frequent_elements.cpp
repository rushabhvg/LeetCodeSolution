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
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>mp;
        vector<int> Res;
        for(int i=0;i<n;i++) {
            mp[nums[i]]++;
        }
        priority_queue<pair<int,int>> m;
        for( auto i : mp) {
            m.push(make_pair( i.second, i.first));
        }
        for( int i =0;i<k ; i++) {
            Res.push_back( m.top().second);
            m.pop();
        }
        return Res;
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
