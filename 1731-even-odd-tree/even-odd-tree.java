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

/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public boolean isEvenOddTree(TreeNode root) {
        if(root==null) return true;
        Queue<TreeNode> q = new LinkedList();
        q.add(root);
        boolean even = true;
        while(q.size()>0) {
            int sz = q.size();
            int preVal = even ? Integer.MIN_VALUE : Integer.MAX_VALUE;
            while(sz-- > 0) {
                root = q.poll();
                if( even && (root.val%2==0 || root.val<=preVal ) ) return false;
                if(!even && (root.val%2==1 || root.val>=preVal) ) return false;
                preVal = root.val;
                if(root.left!=null) q.add(root.left);
                if(root.right != null) q.add(root.right);
            }
            even = !even;
        }
        return true;
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