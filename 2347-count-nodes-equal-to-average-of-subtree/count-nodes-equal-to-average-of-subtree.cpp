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
    int ans=0;
    vector<int> dfs(TreeNode* node)
    {
        if(node==NULL)
        {
            return {0,0};
        }
        vector<int>left=dfs(node->left);
        vector<int>right=dfs(node->right);
        int sum=node->val+left[0]+right[0];
        int count=1+left[1]+right[1];

        if(sum/count==node->val)
        {
            ans++;
        }
        return {sum, count};
    }
    int averageOfSubtree(TreeNode* root) {
        dfs(root);
        return ans;
    }
};