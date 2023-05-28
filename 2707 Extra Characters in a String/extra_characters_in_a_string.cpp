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
  int minExtraChar(string s, vector<string>& dictionary) {
    int n = s.size();
    unordered_set<string> dict(dictionary.begin(), dictionary.end());

    vector<int> dp(n+1);
    
    for (int i = n-1; i >= 0; i--) {
      string t;
      dp[i] = 1 + dp[i+1];
      for (int j = i; j < n; j++) {
        t += s[j];
        if (dict.count(t)) {
            dp[i] = min(dp[i], dp[j+1]);
        }
      }
    }
    
    return dp[0];
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
