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
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        vector<int> diff;
        vector<int> arrPre(51, 0);
        vector<int> arrSuf(51, 0);
        for(int i = 0; i<nums.size(); i++) {
            arrSuf[nums[i]]++;
        }
        for(int i = 0; i<nums.size(); i++) {
            int preCnt = 0;
            int sufCnt = 0;
            arrSuf[nums[i]]--;
            arrPre[nums[i]]++;
            for(int i=0; i<51; i++) {
                if(arrSuf[i]>0) {
                    sufCnt++;
                }
                if(arrPre[i]>0) {
                    preCnt++;
                }
                
            }
            diff.push_back(preCnt - sufCnt);
        }
        return diff;
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
