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
    vector<int> sequentialDigits(int low, int high) {
        queue<int> q;
        vector<int> ret;
        for(int i=1; i<=9; i++) {
            q.push(i);
        }
        while(q.size()) {
            int f = q.front();
            q.pop();
            if(f<=high && f>=low) {
                ret.push_back(f);
            }
            if(f>=high) break;
            int num = f%10;
            if(num<9) {
                q.push(f*10 + (num+1));
            }
        }
        return ret;
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
