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
    private int trans(int n, int[] mp) {
        char[] digits = Integer.toString(n).toCharArray();
        for(int i=0; i<digits.length; i++) {
            digits[i] = (char)( '0' + mp[ digits[i]-'0' ] );
        }
        return Integer.parseInt(new String(digits));
    }
    public int[] sortJumbled(int[] mapping, int[] nums) {
        Map<Integer, Integer> numMp = new HashMap<>();
        for(int n:nums) {
            if(!numMp.containsKey(n)) {
                numMp.put(n, trans(n, mapping));
            }
        }
        Integer[] numsBoxed = Arrays.stream(nums).boxed().toArray(Integer[]::new);
        Arrays.sort(numsBoxed, (a,b) -> Integer.compare(numMp.get(a), numMp.get(b)));
        for(int i=0; i<nums.length; i++) {
            nums[i] = numsBoxed[i];
        }
        return nums;
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
