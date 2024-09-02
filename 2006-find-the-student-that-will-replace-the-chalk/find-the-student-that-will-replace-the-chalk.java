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
    public int chalkReplacer(int[] chalk, int k) {
        int sumOfChalk = 0;
        int n = chalk.length;
        for(int i=0; i<n; i++) {
            sumOfChalk += chalk[i];
            if(sumOfChalk>k) {
                return i;
            }
        }
        System.out.print(sumOfChalk);
        // sumOfChalk %= k;
        k %= sumOfChalk;
        System.out.print("\t" + sumOfChalk);
        int i = 0;
        while(true) {
            // i %= n;
            k -= chalk[i];
            System.out.print("\n"+ i+" " + k);
            if(k<0) {
                return i;
            }
            i++;
            i%=n;
        }
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
