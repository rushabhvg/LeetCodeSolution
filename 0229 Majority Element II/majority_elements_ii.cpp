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
        int cad1 = 0, cad2 = 0, cnt1 = 0, cnt2 = 0;
        for(auto num : nums) {
            if(cad1 == num) cnt1++;
            else if (cad2 == num) cnt2++;
            else if (cnt1 == 0) cad1 = num, cnt1 = 1;
            else if (cnt2 == 0) cad2 = num, cnt2 = 1;
            else cnt1--, cnt2--;
        }
        cnt1 = cnt2 = 0;
        for(int num : nums) {
            if(num == cad1) cnt1++;
            else if(num == cad2) cnt2++;
        }
        vector<int> ans;
        if(cnt1>nums.size()/3) ans.push_back(cad1);
        if(cnt2>nums.size()/3) ans.push_back(cad2);
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
