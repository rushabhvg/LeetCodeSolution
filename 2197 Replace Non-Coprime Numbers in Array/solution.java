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
    
    private int gcd(int a, int b) {
        if(b==0) return a;
        return gcd(b, a % b);
    }

    public List<Integer> replaceNonCoprimes(int[] nums) {
        List<Integer> stk = new ArrayList<>();

        for(int num : nums) {
            while(!stk.isEmpty()) {
                int last = stk.get(stk.size()-1);
                int cp = gcd(last, num);
                if(cp == 1) {
                    break;
                }
                stk.remove(stk.size() - 1);
                num = (last/cp) * num; 
            }
            stk.add(num);
        }

        return stk;
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
