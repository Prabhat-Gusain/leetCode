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
    // int level(TreeNode* root)
    // {
    //     if(root==NULL)
    //     {
    //         return 0;
    //     }

    //     int left=level(root->left);
    //     int right=level(root->right);

    //     return max(left,right)+1;
    // }
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>result;
        queue<TreeNode*>q;
        q.push(root);
        int indx;
        bool flag=true;
        
        if(root==NULL)
        {
            return result;
        }

        while(!q.empty())
        {
            int size=q.size();
            vector<int>ans(size);

            for(int i=0;i<size;i++)
            {
                root=q.front();
                q.pop();
                if(flag==true)
                {
                    indx=i;
                }
                else
                {
                    indx=size-1-i;
                }
                ans[indx]=root->val;
                
                if(root->left)
                {
                    q.push(root->left);
                }
                if(root->right)
                {
                    q.push(root->right);
                }
            }
            flag=!flag;
            result.push_back(ans);
        }
        return result;
    }
};