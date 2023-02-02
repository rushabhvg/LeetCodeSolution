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
    bool isAlienSorted(vector<string>& words, string order) {
        unordered_map<char, int> mapChar;
        int i=0;
        for(char c:order) {
            mapChar[c]=++i;
        }
        for(i=1; i<words.size(); i++) {
            string word1 = words[i-1];
            string word2 = words[i];
            int j=0;
            while (j < word1.length() && j < word2.length() && word1[j] == word2[j]) {
                j++;
            }
            if(j==word1.length()) continue;
            if (j==word2.length()) return false;
            if(mapChar[word1[j]]>mapChar[word2[j]]) return false;
        }
        return true;
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
