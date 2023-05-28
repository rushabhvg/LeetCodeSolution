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
  vector<vector<int>> differenceOfDistinctValues(vector<vector<int>>& grid) {
    int m = grid.size();
    int n = grid[0].size();
    vector<vector<int>> ans = grid;
    unordered_set<int> up;
    unordered_set<int> bottom;
    for(int i=0; i<grid.size(); i++) {
      for(int j=0; j<grid[i].size(); j++) {
        // calc up and bottom
        up.clear();
        bottom.clear();
        for(int p=i-1, q=j-1; p>=0 && p<m && q>=0 && q<n; p--, q--) {
          up.insert(grid[p][q]);
        }
        for(int p=i+1, q=j+1; p>=0 && p<m && q>=0 && q<n; p++, q++) {
          bottom.insert(grid[p][q]);
        }
        int a = up.size() - bottom.size();
        if(a>=0) ans[i][j] = a;
        else ans[i][j] = a*-1;
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
