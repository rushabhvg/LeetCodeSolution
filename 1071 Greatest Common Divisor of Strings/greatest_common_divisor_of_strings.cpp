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
    int gcd(int a, int b) {
        return b == 0 ? a : gcd(b, a % b);   
    }
    string gcdOfStrings(string str1, string str2) {
        string str="";
        bool chk1=true;
        bool chk2=true;
        int s1=str1.length();
        int s2=str2.length();
        int g = gcd(s1, s2);
        for(int i=0; i<g; i++) {
            if(str1[i]==str2[i]) {
                str.push_back(str1[i]);
            } else {
                break;
            }
        }
        if(str.length()==0) return str;
        for(int i=g; i<str1.length(); i++) {
            if(str1[i]!=str[i%g]) {
                chk1=false;
                return "";
            }
        }
        for(int i=g; i<str2.length(); i++) {
            if(str2[i]!=str[i%g]) {
                chk2=false;
                return "";
            }
        }
        return str;
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
