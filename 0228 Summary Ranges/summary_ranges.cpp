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
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> strSR;
        string str="";
        int currStart=0;
        if(nums.size()==0) return strSR;
        if(nums.size()==1) {
            strSR.push_back(to_string(nums[0]));
            return strSR;
        }
        str = to_string(nums[0]);
        for(int i=0; i<nums.size()-1; i++) {
            if(nums[i]+1!=nums[i+1]) {
                if(i!=currStart) {
                    str += "->" + to_string(nums[i]);
                    // currStart=i+1;
                }
                strSR.push_back(str);
                currStart=i+1;
                str=to_string(nums[i+1]);
            }
            if(i==nums.size()-2) {
                if(nums[i]+1==nums[i+1]) {
                    str += "->" + to_string(nums[i+1]);
                    strSR.push_back(str);
                    str="";
                }
            }
        }
        int i=0;
        for(char c:str) {
            if(c=='-') {
                i=1;
            }
        }
        if(i==0 && str.size()!=0) {
            strSR.push_back(str);
        }
        return strSR;
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
