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
    char nextGreatestLetter(vector<char>& letters, char target) {
        int ans = int(letters[0]);
        int j = 0;
        while(char(ans)<=target && j<letters.size()) {
            if(int(letters[j])>int(target)) ans = int(letters[j]);
            j++;
        }
        if(j==letters.size()) return int(ans);
        for(int i=j; i<letters.size(); i++) {
            if( int(letters[i])>int(target) && ans>int(letters[i]) ) ans = int(letters[i]);
        }
        return char(ans);
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
