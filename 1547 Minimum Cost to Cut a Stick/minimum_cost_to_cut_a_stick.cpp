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
  vector<vector<int>> memo;
  vector<int> newCuts;
  int cost(int l, int r) {
    if(memo[l][r]!= -1) return memo[l][r];
    if(r-l==1) return 0;
    int ans = INT_MAX;
    for(int mid = l+1; mid<r; mid++) {
      int cost1 = cost(l, mid) + cost(mid, r) + newCuts[r]-newCuts[l];
      ans = min(ans, cost1);
    }
    memo[l][r] = ans;
    return ans;
  }
  int minCost(int n, vector<int>& cuts) {
    int m = cuts.size();
    newCuts = cuts;
    newCuts.push_back(n);
    newCuts.push_back(0);
    sort(newCuts.begin(), newCuts.end());
    memo.resize(m+2, vector<int>(m+2, -1));
    return cost(0, newCuts.size()-1);
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
