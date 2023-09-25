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
    char findTheDifference(string s, string t) {
        int arr[26] = {0};
        for(char c:s) {
            arr[int(c)-97]++;
        }
        for(char c:t) {
            arr[int(c)-97]--;
        }
        for(int i=0; i<26; i++) {
            if(arr[i]!=0) return char(i+97);
        }
        return '.';
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
