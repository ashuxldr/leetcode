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
    
    
    bool solve(TreeNode* root, int t, int &sum) {
    
        if(root==NULL)
            return false;
        
        sum+= root->val;
        
        if(!root->left and !root->right)
        {
            if(sum==t)
                return true;
            else{
                sum-=root->val;
                return false;
            }
        }
        
        bool left = solve(root->left,t,sum);
        bool right = solve(root->right,t,sum);
        
        sum-=root->val;
        if(left)
            return left;
        else if(right)
            return right;
        else 
            return false;

    
    }

    
    bool hasPathSum(TreeNode* root, int targetSum) {
        int s=0;
        return solve(root,targetSum,s);
    }
};