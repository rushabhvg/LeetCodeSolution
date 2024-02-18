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
    bool isPr(int n) {
        if(n<=10) return false;
        int sq = sqrt(n);
        for(int i=2; i<=sq; i++) {
            if(n%i==0) return false;
        }
        return true;
    }

    int mostFrequentPrime(vector<vector<int>>& mat) {
        
        int n = mat.size();     // rows
        int m = mat[0].size();  // cols
        
        int drow[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
        int dcol[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
        
        unordered_map<int, int> mp;

        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                for(int k=0; k<8; k++) {

                    int digit = mat[i][j];
                    int row = i + drow[k];
                    int col = j + dcol[k];

                    while(row>=0 && row<n && col>=0 && col<m) {

                        digit = (digit*10) + mat[row][col];
                        
                        if(isPr(digit)) mp[digit]++;
                        
                        row += drow[k];
                        col += dcol[k];
                    }
                }
            }
        }

        if(mp.empty()) return -1;

        int freq = 0;
        int ans;
        
        for(auto &it: mp) {
        
            if(freq == it.second) {
                ans = max(ans, it.first);
            } 
        
            if (freq<it.second) {
                freq = it.second;
                ans = it.first;
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
