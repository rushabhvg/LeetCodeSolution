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
    int base = 1000000;
    int rkAlgo(string src, string tgt) {
        if(src=="" or tgt == "") return -1;
        int m = tgt.size();
        int pow = 1;
        for(int i=0; i<m; i++) {
            pow = (pow*31)%base;
        }
        int tgtCode = 0;
        for(int i=0; i<m; i++) {
            tgtCode = ( tgtCode*31 + tgt[i] )%base;
        }
        int hashCode = 0;
        for(int i=0; i<src.size(); i++) {
            hashCode = (hashCode*31 + src[i]) % base;
            if(i<m-1) continue;
            if(i>=m) {
                hashCode = ( hashCode-src[i-m] * pow) % base;
            }
            if(hashCode<0) hashCode += base;
            if(hashCode==tgtCode) {
                if(src.substr(i-m+1, m) == tgt) return i-m+1;
            }
        }
        return -1;
    }
public:
    int repeatedStringMatch(string a, string b) {
        if(a==b) return 1;
        int cnt = 1;
        string src = a;
        while(src.size() < b.size()) {
            cnt++;
            src += a;
        }
        if(src == b) return cnt;
        if(rkAlgo(src, b) != -1) return cnt;
        if(rkAlgo(src+a, b) != -1) return cnt+1;
        return -1;
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
