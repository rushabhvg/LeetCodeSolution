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
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        vector<pair<int, int>> projects;
        for (int i = 0; i < profits.size(); i++) {
            projects.push_back(make_pair(capital[i], profits[i]));
        }
        sort(projects.begin(), projects.end());
        priority_queue<int> maxProfits;
        int i = 0;
        while (k > 0) {
            while (i < projects.size() && projects[i].first <= w) {
                maxProfits.push(projects[i].second);
                i++;
            }
            if (maxProfits.empty()) {
                return w;
            }
            int currProfit = maxProfits.top();
            maxProfits.pop();
            w += currProfit;
            k--;
        }
        return w;
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
