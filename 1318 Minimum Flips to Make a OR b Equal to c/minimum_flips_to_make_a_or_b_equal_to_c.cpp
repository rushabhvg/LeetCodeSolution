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
    string convToBin(int x) {
        string res = "";
        while(x>0) {
            int rem = x%2;
            if(rem) res+="1";
            else res+="0";
            x = x/2;
        }
        reverse(res.begin(), res.end());
        return res;
    }
    void padTo(std::string &str, const size_t num, const char paddingChar = '0') {
        if(num > str.size())
            str.insert(0, num - str.size(), paddingChar);
    }
    int minFlips(int a, int b, int c) {
        string strA = convToBin(a);
        string strB = convToBin(b);
        string strC = convToBin(c);
        int maxS = max(strA.size(), max(strB.size(), strC.size()));
        padTo(strA, maxS);
        padTo(strB, maxS);
        padTo(strC, maxS);
        int flips = 0;
        for(int i =0; i<strC.size(); i++) {
            cout<<"\n"<<strC[i]<<" "<<strA[i]<<" "<<strB[i];
            if(strC[i]=='0') {
                if(strA[i]=='1') flips++;
                if(strB[i]=='1') flips++;
            } else {
                if(strA[i]=='0' && strB[i]=='0') {
                    flips++;
                }
            }
            cout<<"\t"<<flips;
        }
        /*
        1000
        0011
        0101
        */
        return flips;
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
