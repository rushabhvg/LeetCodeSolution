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
    private int stepsTime(int steps, int time, int chg) {
        int res = 0;
        while(--steps>0) {
            res += time;
            if((res/chg)%2==1) {
                res = (res/chg+1)*chg;
            }
        }
        return res + time;
    }
    public int secondMinimum(int n, int[][] edges, int time, int change) {
        List<List<Integer>> arrLst = new ArrayList<List<Integer>>();
        int[] minSteps = new int[n+1];
        Arrays.fill(minSteps, 10001);
        for(int i=0; i<=n; i++) {
            arrLst.add(new ArrayList<Integer>());
        }
        for(var e:edges) {
            arrLst.get(e[0]).add(e[1]);
            arrLst.get(e[1]).add(e[0]);
        }
        int step = -1;
        List<Integer> q = new ArrayList<>(List.of(1));
        while(!q.isEmpty() && ++step<=minSteps[n]+1) {
            List<Integer> q1 = new ArrayList<>();
            for(int i:q) {
                if(step==minSteps[i] || step>minSteps[i]+1) continue;
                minSteps[i] = Math.min(minSteps[i], step);
                if(i==n && step>minSteps[n]) {
                    return stepsTime(step, time, change);
                }
                for (int j:arrLst.get(i)) {
                    q1.add(j);
                }
            }
            q = q1;
        }
        return stepsTime(minSteps[n]+2, time, change);
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
