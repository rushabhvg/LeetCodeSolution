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
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq;
        vector<int> ansArr;
        for(int i=0; i<k; i++) {
            while(!dq.empty() && nums[i]>=nums[dq.back()]) {
                // cout<<endl<<"while loop: ";
                // for(int i=0; i<dq.size(); i++) {
                //     cout<<dq[i]<<" ";
                // }
                dq.pop_back();
            }
            dq.push_back(i);
            // cout<<endl<<"for loop: ";
            // for(int i=0; i<dq.size(); i++) {
            //     cout<<dq[i]<<" ";
            // }
        }
        ansArr.push_back(nums[dq.front()]);
        for(int i=k; i<nums.size(); i++) {
            // cout<<endl<<"for loop2: ";
            if(dq.front() == i-k) {
                // for(int i=0; i<dq.size(); i++) {
                //     cout<<dq[i]<<" ";
                // }
                dq.pop_front();
            }
            while(!dq.empty() && nums[i]>=nums[dq.back()]) {
                // cout<<endl<<"while loop2: ";
                // for(int i=0; i<dq.size(); i++) {
                //     cout<<dq[i]<<" ";
                // }
                dq.pop_back();
            }
            dq.push_back(i);
            // cout<<endl<<"for loop3: ";
            // for(int i=0; i<dq.size(); i++) {
            //     cout<<dq[i]<<" ";
            // }
            ansArr.push_back(nums[dq.front()]);
        }
        return ansArr;
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
