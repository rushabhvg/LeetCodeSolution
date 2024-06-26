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
    List<TreeNode> sortedArr = new ArrayList<>();
    public TreeNode balanceBST(TreeNode root) {
        inOrderTrav(root);
        return sortedArrToBST(0, sortedArr.size() -1);
    }
    void inOrderTrav(TreeNode root) {
        if(root==null) return ;
        inOrderTrav(root.left);
        sortedArr.add(root);
        inOrderTrav(root.right);
    }
    TreeNode sortedArrToBST(int st, int end) {
        if(st>end) return null;
        int mid = (st+end)/2;
        TreeNode rt = sortedArr.get(mid);
        rt.left = sortedArrToBST(st, mid-1);
        rt.right = sortedArrToBST(mid+1, end);
        return rt;
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
