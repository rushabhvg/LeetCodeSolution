/*
By Rushabh Gala
rushabhvg
GitHub:
https://github.com/rushabhvg
StackOverflow:
https://stackoverflow.com/users/16571212/rushabhvg
LinkedIn:
https://www.linkedin.com/in/rushabhvg/
*/

class Solution {
    public boolean isVowel(char c) {
        if( (c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U') ) {
            return true;
        }
        return false;
    }

    public boolean isCons(char c) {
        if((c-'a' >= 0 && c-'a' <= 25) || (c-'A' >= 0 && c-'A' <= 25)) {
            return true;
        }
        return false;
    }
    
    public boolean isNum(char c) {
        if(c-'0' >= 0 && c-'0' <=10) {
            return true;
        }
        return false;
    }

    public boolean isValid(String word) {
        if(word.length() < 3) return false;
        boolean isC = false, isV = false, isN = false;
        boolean oneC = false, oneV = false;
        for(int i = 0; i < word.length(); i++) {
            char c = word.charAt(i);
            isV = isVowel(c);
            if(!oneV) oneV = isV;
            if(!isV) {
                isC = isCons(c);
                if(!oneC) oneC = isC;
                if(!isC) {
                    isN = isNum(c);
                    if(!isN) return false;
                }
            }
            isC = false;
            isV = false;
            isN = false;
        }
        return (oneV && oneC);
    }
}

/*
By Rushabh Gala
rushabhvg
GitHub:
https://github.com/rushabhvg
StackOverflow:
https://stackoverflow.com/users/16571212/rushabhvg
LinkedIn:
https://www.linkedin.com/in/rushabhvg/
*/
