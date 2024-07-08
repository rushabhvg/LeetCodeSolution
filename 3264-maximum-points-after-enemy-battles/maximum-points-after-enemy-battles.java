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
    public long maximumPoints(int[] enemyEnergies, int currentEnergy) {
        int n = enemyEnergies.length;
        long totalEnergy = currentEnergy;
        int mn = enemyEnergies[0];
        for(int e:enemyEnergies) {
            totalEnergy += e;
            if(e<mn) {
                mn = e;
            }
        }
        if(currentEnergy<mn) return 0;
        totalEnergy -= mn;
        return totalEnergy/mn;
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
