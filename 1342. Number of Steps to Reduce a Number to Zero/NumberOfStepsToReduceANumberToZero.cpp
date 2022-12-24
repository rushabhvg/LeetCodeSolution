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
    int numberOfSteps(int num) {
        int stepCnt=0;
        while(num>0) {
            stepCnt+=1;
            if (num%2==0) {
                num/=2;
            } else {
                num-=1;
            }
        }
        return stepCnt;
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
