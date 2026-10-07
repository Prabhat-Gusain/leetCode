/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxSum=INT_MIN;
    int pathSum(TreeNode* root)
    {
        if(root==NULL)
        {
            return 0;
        }
        int left=pathSum(root->left);
        int right=pathSum(root->right);
        
        left = max(0, left);
        right = max(0, right);

        maxSum=max(maxSum,root->val+left+right);

        return root->val+max(left,right);
    }
    int maxPathSum(TreeNode* root) {
        pathSum(root);
        return maxSum;
    }
};