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
    int countSymmetricIntegers(int low, int high) {
        int cnt = 0;
        for(int i=low; i<high+1; i++) {
            string str = to_string(i);
            int n = str.length();
            int suma = 0, sumb=0;
            if(str.length()%2!=0) continue;
            for(int i=0; i<str.length()/2; i++) {
                int a = int(str[i]);
                int b = int(str[n-i-1]);
                suma += a;
                sumb += b;
            }
            if(suma == sumb) cnt++;
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
