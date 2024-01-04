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
    vector<int> majorityElement(vector<int>& nums) {
        int cnt1 = 0;
        int cnt2 = 0;
        int c1 = nums[0];
        int c2 = nums[0];
        for(auto& a:nums) {
            if(a==c1) cnt1++;
            else if(a==c2) cnt2++;
            else if(cnt1==0) c1 = a, cnt1++;
            else if(cnt2==0) c2=a, cnt2++;
            else cnt1--, cnt2--;
        }
        cnt1 = cnt2 = 0;
        for(auto& a:nums) {
            if(a==c1) cnt1++;
            else if (a==c2) cnt2++;
        }
        vector<int> arr;
        if(cnt1>nums.size()/3) arr.push_back(c1);
        if(cnt2>nums.size()/3) arr.push_back(c2);
        return arr;
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
