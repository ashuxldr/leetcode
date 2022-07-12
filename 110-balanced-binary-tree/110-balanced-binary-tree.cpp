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
    pair<bool,int> IsBalanced(TreeNode *root)
    {
        if(!root)
            return make_pair(true,0);
        
        pair<bool,int> left = IsBalanced(root->left);
        pair<bool,int> right = IsBalanced(root->right);
        
        if( left.first and right.first and abs(left.second-right.second)<=1)
            return make_pair(true, max(left.second,right.second)+1);
        else
            return make_pair(false, max(left.second,right.second)+1);
    }
    
    bool isBalanced(TreeNode *root){
        return IsBalanced(root).first;
    }
};