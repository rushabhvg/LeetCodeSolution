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
  string removeTrailingZeros(string num) {
    int last = -1;
    for(int i=num.size(); i>=0; i--) {
      if(num[i]=='0') {
        if(last==-1 && i == num.size()-1) {
          last = i;
        } else if(i==last-1) {
          last = i;
        }
      }
    }
    return num.substr(0, last);
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
