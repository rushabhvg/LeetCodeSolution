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
    public long maxEnergyBoost(int[] energyDrinkA, int[] energyDrinkB) {
        long ans = 0;
        int n = energyDrinkA.length;
        long maxA[] = new long[n];
        long maxB[] = new long[n];
        maxA[0] = energyDrinkA[0];
        maxB[0] = energyDrinkB[0];
        maxA[1] = maxA[0] + energyDrinkA[1];
        maxB[1] = maxB[0] + energyDrinkB[1];
        for(int i=2; i<n; i++) {
            maxA[i] = energyDrinkA[i] + Math.max(maxA[i-1], maxB[i-2]);
            maxB[i] = energyDrinkB[i] + Math.max(maxB[i-1], maxA[i-2]);
        }
        return Math.max(maxA[n-1], maxB[n-1]);
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
