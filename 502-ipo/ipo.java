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
    private static class Project {
        int capital;
        int profit;
        Project(int cap, int proj) {
            capital = cap;
            profit = proj;
        }
    }
    public int findMaximizedCapital(int k, int w, int[] profits, int[] capital) {
        int n = profits.length;
        List<Project> projects = new ArrayList<>();

        for(int i=0; i<n; i++) {
            projects.add(new Project(capital[i], profits[i]) );
        }

        Collections.sort(projects, (a,b)->a.capital-b.capital);

        PriorityQueue<Integer> pq = new PriorityQueue<>( (x, y) -> y-x );
        int i = 0;
        for(int j=0; j<k; j++) {
            while(i<n && projects.get(i).capital<=w) {
                pq.add(projects.get(i).profit);
                i++;
            }
            if(pq.isEmpty()) break;
            w += pq.poll();
        }

        return w;
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
