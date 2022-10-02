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
    public int goodNodes(TreeNode root) {
        return findGoodNodes(root, Integer.MIN_VALUE);
    }
    
    public int findGoodNodes(TreeNode root, int currMaxVal) {
        if (root == null) {
            return 0;
        }
        
        if (root.val >= currMaxVal) {
            currMaxVal = Math.max(currMaxVal, root.val);
            return 1 + findGoodNodes(root.left, currMaxVal) + findGoodNodes(root.right, currMaxVal);
        } else {
            return 0 + findGoodNodes(root.left, currMaxVal) + findGoodNodes(root.right, currMaxVal);
        }
    }
}
