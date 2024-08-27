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

    class State {
        int node;
        double prob;
        State(int n, double p) {
            node = n;
            prob = p;
        }
    }
    
    public double maxProbability(int n, int[][] edges, double[] succProb, int start_node, int end_node) {
        Map<Integer, List<double[]>> mp = new HashMap<>();

        for(int i=0; i<edges.length; i++) {
            int[] edge = edges[i];
        
            mp.putIfAbsent(edge[0], new ArrayList<>());
            mp.putIfAbsent(edge[1], new ArrayList<>());

            mp.get(edge[0]).add(new double[] {edge[1], succProb[i]} );
            mp.get(edge[1]).add(new double[] {edge[0], succProb[i]} );
        }

        double[] probs = new double[n];

        Queue<State> q = new LinkedList<>();
        q.add(new State(start_node, 1.0));
        
        while(!q.isEmpty()) {
            State state = q.poll();
            int par = state.node;
            double prob = state.prob;

            for(double[] child : mp.getOrDefault(par, new ArrayList<>())) {
                if(probs[(int)child[0]] >= prob*child[1]) continue;
        
                q.add(new State((int) child[0], prob*child[1]));
                probs[(int)child[0]] = prob*child[1];
            }
        }
        return probs[end_node];
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
