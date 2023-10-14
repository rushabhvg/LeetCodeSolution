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
    vector<string> getWordsInLongestSubsequence(int n, vector<string>& words, vector<int>& groups) {
        bool srch0 = false;
        vector<string> ansStr;
        vector<int> idxAns;
        ansStr.push_back(words[0]);
        if(groups[0]) srch0=true;
        // else srch1 = true;
        /*      j
            1   0   1   1   0
     i  1   0   1   2   3   3
        0   0   0   1   1   1
        1   0   0   0   0   1
        1   0   0   0   0   1
        0   0   0   0   0   0
        */
        for(int i=1; i<n; i++) {
            if(srch0 && groups[i]==0) {
                ansStr.push_back(words[i]);
                srch0=false;
            } else if (!srch0 && groups[i]==1) {
                ansStr.push_back(words[i]);
                srch0=true;
            }
        }
        return ansStr;
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
