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
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> ans;
        int res=0;
        for(auto& a: nums) res^=a;
        int pos=0;
        int temp=res;
        while((temp&1)==0) {
            pos++;
            temp=temp>>1;
        }
        int resA=0, resB=0;
        int mask=(1<<pos);
        for(auto& a:nums) {
            if( (a&mask)>0 ) resA^=a;
            else resB^=a;
        }
        return {resA, resB};
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
