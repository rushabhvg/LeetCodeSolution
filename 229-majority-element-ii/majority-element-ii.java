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
    public List<Integer> majorityElement(int[] nums) {
        List<Integer> ans = new ArrayList<>();
        
        int n1 = 0;
        int n2 = 0;
        int cnt1 = 0;
        int cnt2 = 0;
        
        for(int i = 0; i<nums.length; i++) {
            if(cnt1==0 && nums[i]!=n2) {
                cnt1 = 1;
                n1 = nums[i];
            } else if(cnt2==0 && nums[i]!=n1) {
                cnt2 = 1;
                n2 = nums[i];
            } else if(nums[i]==n1) cnt1++;
            else if(nums[i]==n2) cnt2++;
            else {
                cnt1--;
                cnt2--;
            }
        }

        int th = nums.length/3;
        
        cnt1 = 0;
        cnt2 = 0;
        
        for(int i=0; i<nums.length; i++) {
            if(n1==nums[i]) cnt1++;
            else if(n2 == nums[i]) cnt2++;
        }

        if(cnt1>th) ans.add(n1);
        if(cnt2>th) ans.add(n2);

        return ans;
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