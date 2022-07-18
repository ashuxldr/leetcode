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
    
   void solve(TreeNode* root, int k, int &c, vector<int> path){
       
       if(root==NULL)
       return;
       
       path.push_back(root->val);
       
       solve(root->left,k,c,path);
       solve(root->right,k,c,path);
       
       long long sum=0;
       for(int i=path.size()-1;i>=0;i--){
           sum+=path[i];
           if(sum==k)
           ++c;
       }
       
       path.pop_back();
       
   }
  


    int pathSum(TreeNode* root, int k) {
                vector<int> path;
        int c=0;
        solve(root,k,c,path);
        return c;
    }
};