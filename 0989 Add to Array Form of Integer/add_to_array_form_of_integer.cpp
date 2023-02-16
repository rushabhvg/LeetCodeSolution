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
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int carry = 0;
        int j = num.size() - 1;
        while(j >= 0) {
            int sum = num[j] + (k % 10) + carry;
            k /= 10;
            num[j--] = sum % 10;
            carry = sum/10;
        }
        while(k > 0) {
            int sum = (k % 10) + carry;
            k /= 10;
            num.insert(num.begin(), sum%10);
            carry = sum/10;
        }
        if(carry > 0) num.insert(num.begin(), carry);
        return num;
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
