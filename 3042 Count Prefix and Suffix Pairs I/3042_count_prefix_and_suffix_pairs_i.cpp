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
    int countPrefixSuffixPairs(vector<string>& words) {
        int ans = 0;
        for(int i=0; i<words.size()-1; i++) {
            string str1 = words[i];
            for(int j=i+1; j<words.size(); j++) {
                string str2 = words[j];
                int n = str1.size(), m = str2.size();
                // cout<<endl<<i<<" "<<j<<":";
                // cout<<"\t"<<str1<<"\t\t"<<str2<<"\t\t"<<ans;
                if(n>m) continue;
                if(n==m) {
                    if(str1==str2) ans++;
                    continue;
                }
                int k, l;
                for(k=0, l=m-n; k<n && l<m; k++, l++) {
                    if(str1[k]!=str2[l] || str1[k]!=str2[k]) break;
                }
                if(k>=n && l>=m) ans++;
                // cout<<"\t\t"<<ans;
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
