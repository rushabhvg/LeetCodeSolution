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
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int, int> counts;
        vector<int> heap;
        for(auto n:arr) counts[n]++;
        for(auto& p:counts) {
            heap.push_back(p.second);
        }
        make_heap(begin(heap), end(heap), greater<int>());
        while(k>0) {
            k -= heap.front();
            pop_heap(begin(heap), end(heap), greater<int>());
            if(k>=0) heap.pop_back();
        }
        return heap.size();
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
