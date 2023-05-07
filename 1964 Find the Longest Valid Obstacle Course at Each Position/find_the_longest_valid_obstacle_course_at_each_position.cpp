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
    vector<int> longestObstacleCourseAtEachPosition(vector<int>& obstacles) {
        vector<int> ans(obstacles.size(), 1);
        vector<int> minArr;
        for(int i=0; i<obstacles.size(); i++) {
            int idx = upper_bound(minArr.begin(), minArr.end(), obstacles[i]) - minArr.begin();
            if(idx == minArr.size()) {
                minArr.push_back(obstacles[i]);
            } else {
                minArr[idx] = obstacles[i];
            }
            ans[i] = idx+1;
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
