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
    int search(vector<int>& inorder ,int left ,int right ,int val)
    {
        for(int i=left;i<=right;i++)
        {
            if(inorder[i]==val)
            {
                return i;
            }
        }
        return -1;
    }
    TreeNode* reccBuildTree(vector<int>& preorder, vector<int>& inorder ,int left ,int right,int& preIndx)
    {
        if(left>right)
        {
            return NULL;
        }
        TreeNode* root=new TreeNode(preorder[preIndx]);
        int inIndx = search(inorder, left, right, preorder[preIndx]);
        preIndx++;
    

        root->left=reccBuildTree(preorder,inorder,left,inIndx-1,preIndx);
        root->right=reccBuildTree(preorder,inorder,inIndx+1,right,preIndx);

        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int preIndx=0;
        return reccBuildTree(preorder,inorder,0,inorder.size()-1,preIndx);
    }
};