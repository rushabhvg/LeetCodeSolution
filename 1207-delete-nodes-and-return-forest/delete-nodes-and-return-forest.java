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
    Set<Integer> to_del_set;
    List<TreeNode> res;
    public List<TreeNode> delNodes(TreeNode root, int[] to_delete) {
        to_del_set = new HashSet<>();
        res = new ArrayList<>();
        for(int del:to_delete) {
            to_del_set.add(del);
        }
        helper(root, true);
        return res;
    }
    private TreeNode helper(TreeNode node, boolean is_root) {
        if(node==null) return null;
        boolean deleted = to_del_set.contains(node.val);
        if(is_root && !deleted) res.add(node);
        node.left = helper(node.left, deleted);
        node.right = helper(node.right, deleted);
        return deleted ? null : node;
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
