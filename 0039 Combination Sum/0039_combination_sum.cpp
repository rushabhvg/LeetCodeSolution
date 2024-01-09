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
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        if(target==0) {
            ans.push_back({});
            return ans;
        }
        if(target<0) return {};
        if(candidates.size()==1 && target%candidates[0]==0) {
            vector<int> oneC;
            for(int i=0; i<target/candidates[0]; i++) {
                oneC.push_back(candidates[0]);
            }
            ans.push_back(oneC);
            return ans;
        }

        if(candidates.size()==1) return {};

        int elm = candidates.back();
        vector<int> arr = candidates;
        arr.pop_back();

        for(int i=1; i<=target/elm; i++) {
            vector<vector<int>> ans2 = combinationSum(arr, (target-elm*i) );
            for(auto &s : ans2) {
                for(int j=0; j<i; j++) {
                    s.push_back(elm);
                }
                ans.push_back(s);
            }
        }

        vector<vector<int>> sub0 = combinationSum(arr, target);
        for(auto &s: sub0) {
            ans.push_back(s);
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
