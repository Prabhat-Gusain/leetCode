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
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL)
        {
            return NULL;
        }

        if(root->val == key)
        {
            return fun(root); 
        }

        TreeNode* result=root;

        while(root!=NULL)
        {
            if(key<root->val)
            {
                if(root->left!=NULL && root->left->val==key)
                {
                    root->left=fun(root->left);
                    break;
                }
                else
                {
                    root=root->left;
                }
            }
            else
            {
                if(root->right!=NULL && root->right->val==key)
                {
                    root->right=fun(root->right);
                    break;
                }
                else
                {
                    root=root->right;
                }
            }
        }
        return result;
    }

    TreeNode* fun(TreeNode* root)
    {
        if(root->left==NULL)
        {
            return root->right;
        }
        else if(root->right==NULL)
        {
            return root->left;
        }
        TreeNode* rightchild=root->right;
        TreeNode* greatestleft=highest(root->left);
        greatestleft->right=rightchild;
        return root->left;
    }

    TreeNode* highest(TreeNode* root)
    {
        if(root->right==NULL)
        {
            return root;
        }
        return highest(root->right);
    }
}; 