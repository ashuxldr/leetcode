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
    TreeNode* invertTree(TreeNode* root) {
        
        if(root==NULL)
            return NULL;
        
        if(!root->left and !root->right)
            return root;
        
        // if(!root->left and root->right)
        // {
        //     root->left = new TreeNode(root->right->val);
        //     root-
        //     return root;
        // }
        // if(!root->right and root->left)
//         {
//             root->right = new TreeNode(root->left->val);
//             return root;
//         }
        
        swap(root->left, root->right);
        // int temp = root->left->val;
        // root->left->val =  root->right->val;
        // root->right->val = temp;
        
        TreeNode* left = invertTree(root->left);
        TreeNode* right = invertTree(root->right);
        
        return root;

    }
};