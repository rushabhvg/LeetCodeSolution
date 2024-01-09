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
    vector<vector<int>> res;
    void comsum(vector<int> & curr, int target, int sum, vector<int> &candidates, int curIdx, int n) {
        if(target==sum) return res.push_back(curr);
        if(sum>target) return;
        for(int i=curIdx; i<n; i++) {
            if(i!=curIdx && candidates[i]==candidates[i-1]) continue;
            sum += candidates[i];
            curr.push_back(candidates[i]);
            comsum(curr, target, sum, candidates, i+1, n);
            sum -= candidates[i];
            curr.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<int> curr;
        comsum(curr, target, 0, candidates, 0, candidates.size());
        return res;
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
