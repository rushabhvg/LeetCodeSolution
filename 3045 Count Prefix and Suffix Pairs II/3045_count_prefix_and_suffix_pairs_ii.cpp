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
private:
    vector<int> z_function(const string &s) {
        int n = s.size();
        vector<int> z(n);
        z[0] = n;
        for(int i=1, l=0, r=0; i<n; i++) {
            if(i<=r) z[i] = min(z[i-l], r-i+1);
            for(int &j = z[i]; i+j<n && s[j]==s[i+j]; j++);
            if(z[i]>r-i+1) {
                l = i;
                r = i + z[i] - 1;
            }
        }
        return z;
    }
public:
    long long countPrefixSuffixPairs(vector<string>& words) {
        unordered_map<int64_t, int> freq;
        long long ans = 0, mod = (int64_t)1e17+3;
        for(auto &w:words) {
            auto z = z_function(w);
            int64_t hash = 0;
            for(int n=w.size(), i=1; i<=n; i++) {
                hash = (hash*27LL + (1LL + w[i-1]-'a')) % mod;
                if(z[n-i]==i) {
                    auto it = freq.find(hash);
                    if(it != freq.end()) ans += it->second;
                }
            }
            ++freq[hash];
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
