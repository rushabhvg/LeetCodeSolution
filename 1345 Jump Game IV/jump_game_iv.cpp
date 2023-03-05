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
    int minJumps(vector<int>& arr) {
        int n = arr.size();
        if (n <= 1) return 0;

        unordered_map<int, vector<int>> mp;
        for (int i = 0; i < n; i++) {
            mp[arr[i]].push_back(i);
        }

        vector<bool> visited(n, false);
        visited[0] = true;

        queue<int> q;
        q.push(0);

        int steps = 0;
        while (!q.empty()) {
            int size = q.size();
            for (int i = 0; i < size; i++) {
                int cur = q.front();
                q.pop();
                if (cur == n - 1) return steps;
                if (cur - 1 >= 0 && !visited[cur - 1]) {
                    visited[cur - 1] = true;
                    q.push(cur - 1);
                }
                if (cur + 1 < n && !visited[cur + 1]) {
                    visited[cur + 1] = true;
                    q.push(cur + 1);
                }
                for (int next : mp[arr[cur]]) {
                    if (!visited[next]) {
                        visited[next] = true;
                        q.push(next);
                    }
                }
                mp.erase(arr[cur]);
            }
            steps++;
        }
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
