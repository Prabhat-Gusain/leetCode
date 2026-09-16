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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* temp=root;
        TreeNode* tail=NULL;
        TreeNode* p;
        if(root==NULL)
        {
            p=new TreeNode();
            p->val=val;
            p->left=p->right=NULL;
            return p;
        }
        while(temp!=NULL)
        {
            tail=temp;
            if(val==temp->val)
            {
                return NULL;
            }
            else if(val<temp->val)
            {
                temp=temp->left;
            }
            else
            {
                temp=temp->right;
            }
        }
        p=new TreeNode();
        p->val=val;
        p->left=p->right=NULL;
        if(p->val > tail->val)
        {
            tail->right=p;
        }
        else
        {
            tail->left=p;
        }
        return root;
    }
};