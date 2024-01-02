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
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.size()<2) return intervals;
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> mergedIntervals;
        mergedIntervals.push_back(intervals[0]);
        for(int i=1; i<intervals.size(); i++) {
            if(mergedIntervals.back()[1]>=intervals[i][0]) {
                mergedIntervals.back()[1] = max(mergedIntervals.back()[1], intervals[i][1]);
            } else {
                mergedIntervals.push_back(intervals[i]);
            }
        }
        return mergedIntervals;
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
