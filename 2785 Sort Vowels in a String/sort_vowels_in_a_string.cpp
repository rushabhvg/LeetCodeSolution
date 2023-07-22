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
    string sortVowels(string s) {
        string t = s;
        vector<int> pos;
        int cntA=0, cntE=0, cntI=0, cntO=0, cntU=0, cnta=0, cnte=0, cnti=0, cnto=0, cntu=0;
        for(int i=0; i<s.size(); i++) {
            int a = s[i]-65;
            /*
            A = 65
            E = 69
            I = 73
            O = 79
            U = 85
            a = 97
            e = 101
            i = 105
            o = 111
            u = 117
            */
            // cout<<char(a+65)<<" "<<i<<" ";
            if(a==0) {
                // cout<<i;
                cntA++;
                pos.push_back(i);
            } else if (a==4) {
                // cout<<i;
                cntE++;
                pos.push_back(i);
            } else if(a == 8) {
                // cout<<i;
                cntI++;
                pos.push_back(i);
            } else if (a == 14) {
                // cout<<i;
                cntO++;
                pos.push_back(i);
            } else if (a == 20) {
                // cout<<i;
                cntU++;
                pos.push_back(i);
            } else if (a==32) {
                // cout<<i;
                cnta++;
                pos.push_back(i);
            } else if (a==36) {
                // cout<<i;
                cnte++;
                pos.push_back(i);
            } else if(a == 40) {
                // cout<<i;
                cnti++;
                pos.push_back(i);
            } else if (a == 46) {
                // cout<<i;
                cnto++;
                pos.push_back(i);
            } else if (a == 52) {
                // cout<<i;
                cntu++;
                pos.push_back(i);
            }
            // cout<<endl;
        }
        sort(pos.begin(), pos.end());
        for(int j=0; j<pos.size(); j++) {
            int i = pos[j];
            if(cntA!=0) {
                t[i] = 'A';
                cntA--;
            } else if (cntE!=0) {
                t[i]='E';
                cntE--;
            } else if (cntI!=0) {
                t[i]='I';
                cntI--;
            } else if (cntO!=0) {
                t[i]='O';
                cntO--;
            } else if (cntU!=0) {
                t[i]='U';
                cntU--;
            } else if (cnta!=0) {
                t[i]='a';
                cnta--;
            } else if (cnte!=0) {
                t[i]='e';
                cnte--;
            } else if (cnti!=0) {
                t[i]='i';
                cnti--;
            } else if (cnto!=0) {
                t[i]='o';
                cnto--;
            } else if (cntu!=0) {
                t[i]='u';
                cntu--;
            }
        }
        // cout<<endl;
        return t;
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
