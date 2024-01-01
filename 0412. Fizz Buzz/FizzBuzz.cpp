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
    vector<string> fizzBuzz(int n) {
        vector<string> ansStr;
        for(int i=0; i<n; i++) {
            if ( (i+1)%15==0 ) ansStr.push_back("FizzBuzz");
            else if ( (i+1)%3==0 ) ansStr.push_back("Fizz");
            else if ( (i+1)%5==0 ) ansStr.push_back("Buzz");
            else ansStr.push_back(to_string(i+1));
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
