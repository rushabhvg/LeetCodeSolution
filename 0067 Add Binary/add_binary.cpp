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
    string addBinary(string a, string b) {
        int aLen = a.length();
        int bLen = b.length();
        bool carry=false;
        string ans="";
        if(aLen<bLen) {
            int diff = bLen - aLen;
            for(int i =0; i<diff; i++) {
                a = "0" + a;
            }
        } else {
            int diff = aLen - bLen;
            for(int i =0; i<diff; i++) {
                b = "0" + b;
            }
        }

        if(aLen>bLen) bLen = aLen;
        else aLen = bLen;

        // cout<< a << " " << aLen;
        // cout<<endl << b << " " <<bLen;

        for(int i=aLen-1; i>=0; i--) {
            if(a[i]=='0') {
                if(b[i]=='0') {
                    if(carry) {
                        a[i]='1';
                        carry=false;
                    } else {
                        a[i]='0';
                    }
                } else if(b[i]=='1') {
                    if(carry) {
                        a[i]='0';
                    } else {
                        a[i]='1';
                    }
                }
            } else if(a[i]=='1') {
                if(b[i]=='0') {
                    if(carry) {
                        a[i]='0';
                    } else {
                        a[i]='1';
                    }
                } else if(b[i]=='1') {
                    if(carry) {
                        a[i]='1';
                    } else {
                        a[i]='0';
                        carry=true;
                    }
                }
            }
        }
        if(carry) {
            a = "1" + a;
        }
        return a;
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
