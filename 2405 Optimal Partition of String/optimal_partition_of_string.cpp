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
    int partitionString(string s) {
        int cnt = 0;
        vector<int> charArr(26, 0);
        for(int i = 0; i<s.size(); i++) {
            // cout<<endl<<i<<" "<<s[i]<<" "<<charArr[s[i]-97];
            if(charArr[s[i]-97]==0) {
                charArr[s[i]-97]++;
                // cout<<" update: "<<charArr[s[i]-97];
            } else if(charArr[s[i]-97]!=0) {
                cnt++;
                // charArr.clear();
                for(int j=0; j<26; j++) charArr[j]=0;
                charArr[s[i]-97]++;
                // cout<<" "<<cnt;
            }
            if(i==s.size()-1) {
                cnt++;
            }
        }
        return cnt;
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
