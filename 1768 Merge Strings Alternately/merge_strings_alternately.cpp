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
    string mergeAlternately(string word1, string word2) {
        string str="";
        int m = word1.size();
        int n = word2.size();
        for(int i=0; i<word1.size() && i<word2.size(); i++) {
            str += word1[i];
            str += word2[i];
        }
        if(m!=n) {
            if(m>n) {
                for(int i=n; i<m; i++) {
                    str += word1[i];
                }
            } else {
                for(int i=m; i<n; i++) {
                    str += word2[i];
                }
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
