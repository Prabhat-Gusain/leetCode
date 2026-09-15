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
    int maxDepth(TreeNode* root) {
        TreeNode* temp=root;
        int x=0;
        int y=0;

        if(temp==NULL)
        {
            return NULL;
        }

        x=maxDepth(temp->left);
        y=maxDepth(temp->right);
        if(x>y)
        {
            return x+1;
        }
        return y+1;
    }
    
};