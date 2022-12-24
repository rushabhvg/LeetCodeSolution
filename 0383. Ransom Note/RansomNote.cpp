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
    bool canConstruct(string ransomNote, string magazine) {
        int arr[26]={0};
        int chk[26]={0};
        bool chkBool=true;
        for(char c:ransomNote) {
            arr[int(c)-97]++;
        }
        for(char c: magazine) {
            chk[int(c)-97]++;
        }

        for(int i=0; i<26; i++) {
            if(arr[i]>chk[i]) {
                chkBool=false;
            }
        }
        return chkBool;
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
