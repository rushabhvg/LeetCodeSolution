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
    int takeCharacters(string s, int k) {
        int cntA=0, cntB=0, cntC=0;
        int n = s.length();
        int winA=0, winB=0, winC=0;
        int i=0, j=0;
        int mx=0;

        for(auto it: s) {
            if(it=='a') cntA++;
            if(it=='b') cntB++;
            if(it=='c') cntC++;
        }

        if( (cntA<k) || (cntB<k) || (cntC<k) ) {
            return -1;
        }

        cntA=cntA-k;
        cntB=cntB-k;
        cntC=cntC-k;
        i=0; j=0;
        while(j<n) {
            if(s[j]=='a') winA++;
            else if (s[j]=='b') winB++;
            else winC++;

            while( (cntA<winA) || (cntB<winB) || (cntC<winC) ) {
                if(s[i]=='a') winA--;
                else if (s[i]=='b') winB--;
                else winC--;
                i++;
            }
            
            mx = max (mx, j-i+1);
            j++;
        }

        return n-mx;
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
