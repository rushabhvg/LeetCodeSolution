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
    
    class TrieNode {
        boolean endsWord = false;
        TrieNode[] childrenNodes;
        int cost;
        public TrieNode() {
            childrenNodes = new TrieNode[26];
        }
        public TrieNode get(Character c) {
            return childrenNodes[c-'a'];
        }
        public void put(Character c) {
            if(!containsKey(c)) {
                childrenNodes[c-'a'] = new TrieNode();
            }
        }
        public boolean containsKey(Character c) {
            return childrenNodes[c-'a'] !=null;
        }
    }

    TrieNode root;
    Integer[] dp;
    int n;

    public int topDownDP(String target, int currIdx) {
        if(currIdx>=n) return 0;
        if(dp[currIdx] != null) return dp[currIdx];
        int ans = Integer.MAX_VALUE;
        TrieNode currNode = root;
        for(int i=currIdx; i<n; i++) {
            char nextChar = target.charAt(i);
            if(!currNode.containsKey(nextChar)) break;
            currNode = currNode.get(nextChar);

            if(currNode.endsWord) {
                int localAns = topDownDP(target, i+1);
                if(localAns != Integer.MAX_VALUE) {
                    localAns += currNode.cost;
                    ans = Math.min(ans, localAns);
                }
            }
        }
        dp[currIdx] = ans;
        return ans;
    }

    public void buildTrie(String[] words, int[] costs) {
        for(int i=0; i<words.length; i++) {
            TrieNode nextNode = root;
            for(char c:words[i].toCharArray()) {
                if(!nextNode.containsKey(c)) {
                    nextNode.put(c);
                }
                nextNode = nextNode.get(c);
            }
            if(nextNode.endsWord) {
                nextNode.cost = Math.min(nextNode.cost, costs[i]);
            } else {
                nextNode.endsWord = true;
                nextNode.cost = costs[i];
            }
        }
    }

    public int minimumCost(String target, String[] words, int[] costs) {
        root = new TrieNode();
        buildTrie(words, costs);

        n = target.length();
        dp = new Integer[n];

        int ans = topDownDP(target, 0);
        if(ans==Integer.MAX_VALUE) ans = -1;
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
