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
    private TreeNode helper(TreeNode root, int depth, int d, int val, boolean left) {
        if(d==depth) {
            TreeNode node = new TreeNode(val);
            if(left) node.left = root;
            else node.right = root;
            return node;
        }
        if(root==null) return null;
        root.left = helper(root.left, depth, d+1, val, true);
        root.right = helper(root.right, depth, d+1, val, false);
        return root;
    }
    public TreeNode addOneRow(TreeNode root, int val, int depth) {
        return helper(root, depth, 1, val, true);
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
