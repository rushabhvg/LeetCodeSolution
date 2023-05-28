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
  int getf(vector<int>& f, int x) {
    return f[x] == x ? x: (f[x] = getf(f, f[x]));
  }

  void merge(vector<int>& f, vector<int>& num, int x, int y) {
    x = getf(f, x);
    y = getf(f, y);
    if(x==y) return;
    if(num[x]<num[y]) swap(x, y);
    f[y] = x;
    num[x]+=num[y];
  }
  bool canTraverseAllPairs(vector<int>& nums) {
    int n = nums.size();
    if(n==1) return true;
    vector<int> f(n), num(n);
    for(int i=0; i<n; i++) {
      f[i] = i;
      num[i] = 1;
    }
    unordered_map<int, int> have;
    for(int i=0; i<n; i++) {
      int x = nums[i];
      if(x==1) return false;
      for(int d=2; d*d<=x; d++) {
        if(x%d==0) {
          if(have.count(d)) {
            merge(f, num, i, have[d]);
          } else {
            have[d] = i;
          }
          while(x%d==0) {
            x/=d;
          }
        }
      }
      if(x>1) {
        if(have.count(x)) {
          merge(f, num, i, have[x]);
        } else {
          have[x] = i;
        }
      }
    }
    return num[getf(f, 0)] == n;
    /*
    4, 3, 12, 8
    3, 4, 8, 12
        3  4  8  12
    3  0  0  0  1
    4  0  0  1  1
    8  0  1  0  1
    12 1  1  1  0
    */
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
