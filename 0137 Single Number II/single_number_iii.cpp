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
    void binCalc(vector<int>& powArr, int a) {
        for(int i=0; i<32; i++) {
            int curr = a & (1<<i);
            if(curr) powArr[i]++;
        }
    }
    int convBinDec(vector<int>& powArr) {
        int num=0;
        for(int i=0; i<32; i++) {
            num+= (powArr[i]*(1<<i));
        }
        return num;
    }
    int singleNumber(vector<int>& nums) {
        vector<int> powArr(32,  0);
        for(auto& a:nums) binCalc(powArr, a);
        for(int i=0; i<32; i++) powArr[i]%=3;
        return convBinDec(powArr);
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
