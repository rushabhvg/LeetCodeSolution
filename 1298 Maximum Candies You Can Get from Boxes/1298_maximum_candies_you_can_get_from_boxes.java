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
    public int maxCandies(int[] status, int[] candies, int[][] keys, int[][] containedBoxes, int[] initialBoxes) {
        boolean foundOpenable = true;
        int tot = 0;

        List<Integer> boxes = new ArrayList<>();
        for(int b:initialBoxes) {
            boxes.add(b);
        }

        while(!boxes.isEmpty() && foundOpenable) {
            foundOpenable = false;
            List<Integer> nxtBox = new ArrayList<>();
            for(int boxId : boxes) {
                if(status[boxId] == 1) {
                    foundOpenable = true;
                    for(int k:containedBoxes[boxId]) nxtBox.add(k);
                    for(int keyId : keys[boxId]) status[keyId] = 1;
                    tot += candies[boxId];
                } else {
                    nxtBox.add(boxId);
                }
            }
            boxes = nxtBox;
        }

        return tot;
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
