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
    bool isFascinating(int n) {
        int n1  = n;
        int n2 = n1+n1;
        int n3 = n2+n1;
        string str1 = to_string(n1);
        string str2 = to_string(n2);
        string str3 = to_string(n3);
        int arr[10]={0};
        for (char c : str1) {
            if (arr[c - '0'] != 0 || c == '0') return false;
            arr[c - '0']++;
        }
        for (char c : str2) {
            if (arr[c - '0'] != 0 || c == '0') return false;
            arr[c - '0']++;
        }
        for (char c : str3) {
            if (arr[c - '0'] != 0 || c == '0') return false;
            arr[c - '0']++;
        }
        
        for(int i=1; i<=9; i++) {
            if(arr[i]!=1) return false;
        }
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
