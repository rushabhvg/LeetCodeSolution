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
    public int[] frequencySort(int[] nums) {
        int[] fqMp = new int [201];
        for(int n:nums) {
            fqMp[n+100]++;
        }
        Integer[] numsArr = Arrays.stream(nums).boxed().toArray(Integer[]::new);
        Arrays.sort(numsArr, (a, b) -> {
            if(fqMp[a+100]==fqMp[b+100]) {
                return b-a;
            }
            return fqMp[a+100]-fqMp[b+100];
        });
        return Arrays.stream(numsArr).mapToInt(Integer::intValue).toArray();
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
