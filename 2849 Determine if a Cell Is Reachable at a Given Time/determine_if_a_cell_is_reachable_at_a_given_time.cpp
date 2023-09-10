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
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        // logic
        if(sx == fx && sy == fy) {
            if(t!=1) return true;
            else return false;
        } else if(sx == fx) {
            if(abs(sy-fy)<=t) return true;
        } else if(sy == fy) {
            if(abs(sx-fx)<=t) return true;
        } else {
            int dx = abs(sx-fx);
            int dy = abs(sy-fy);
            if(dx>=dy && dx<=t) return true;
            if(dy>=dx && dy<=t) return true;
            // if ( max(abs(sx-fx)+abs(sy-fy))<=t) return true;
        }
        return false;
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
