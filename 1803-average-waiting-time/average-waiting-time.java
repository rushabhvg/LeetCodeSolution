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
    public double averageWaitingTime(int[][] customers) {
        int n = customers.length;
        double prepare = customers[0][0];
        double wait = 0;
        int i = 0;
        while(i<n) {
            double arrival = customers[i][0];
            double time = customers[i][1];
            double diff = 0;
            // System.out.print(arrival + " " + prepare );
            if(arrival<=prepare) {
                prepare += time;
                diff = (prepare-arrival);
            } else {
                prepare = arrival+time;
                diff = time;
            }
            wait += diff;
            // System.out.print(" - " + prepare + " = " + diff + "\n");
            i++;
        }
        // System.out.print("\n" + wait + " / " + n);
        return (double)wait/n;
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
