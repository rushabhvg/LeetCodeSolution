/*
By Rushabh Gala
rushabhvg
GitHub:
https://github.com/rushabhvg
StackOverflow:
https://stackoverflow.com/users/16571212/rushabhvg
LinkedIn:
https://www.linkedin.com/in/rushabhvg/
*/

class Solution {
public:
    string addBinary(string a, string b) {
        int n1 = a.length(), n2 = b.length();
        string str;
        int carry = 0;
        while (n1 > 0 || n2 > 0 || carry) {
            if (n1 > 0) {
                carry += a[--n1] - '0';
            }
            if (n2 > 0) {
                carry  += b[--n2] - '0';
            }
            str += carry % 2 + '0';
            carry /= 2;
        }
        reverse(begin(str), end(str));
        return str;
    }
};

/*
By Rushabh Gala
rushabhvg
GitHub:
https://github.com/rushabhvg
StackOverflow:
https://stackoverflow.com/users/16571212/rushabhvg
LinkedIn:
https://www.linkedin.com/in/rushabhvg/
*/
