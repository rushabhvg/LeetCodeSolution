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
    int maxDiff(vector<int>& nums, int left, int right, int n, vector<vector<int>>& arr) {
        if(arr[left][right]!=-1) return arr[left][right];
        if(left==right) return nums[left];
        int scoreByLeft = nums[left]-maxDiff(nums, left+1, right, n, arr);
        int scoreByRight = nums[right]-maxDiff(nums, left, right-1, n, arr);
        arr[left][right] = max(scoreByLeft, scoreByRight);
        return arr[left][right];
    }
    bool PredictTheWinner(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> arr(n, vector<int>(n, -1));
        return maxDiff(nums, 0, n-1, n, arr)>=0;
        /*
        X   1   5   2
        -   0   0   0
        1   1   0   0
        2   1   2   0
        3   1   2   1
        4   1   0   2
        5   1   1   2
        6   0   0   1
        7   0   2   1
        8   1   2   1
        */
        return true;
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
