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
    
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        if(root==NULL)
            return res;
        stack<TreeNode*> st;
        while(true){
            if(root){
                st.push(root);
                res.push_back(root->val);
                root = root->left;
            }
            else{
            if(st.empty()) break;
            root = st.top();
            st.pop();
                root=root->right;
                
}
        }
        return res;
    }
    
    
//     ITERATIVE-2
    // vector<int> preorderTraversal(TreeNode* root) {
    //     vector<int> res;
    //     if(root==NULL)
    //         return res;
    //     stack<TreeNode*> st;
    //     st.push(root);
    //     while(!st.empty()){
    //         TreeNode* curr = st.top();
    //         res.push_back(curr->val);
    //         st.pop();
    //         if(curr->right)
    //             st.push(curr->right);
    //         if(curr->left)
    //             st.push(curr->left);
    //     }
    //     return res;
    // }
    
    
//     RECURSIVE
//     void pre(TreeNode* root, vector<int> &res){
//         if(root==NULL)
//         return;
    
//         res.push_back(root->val);
//         pre(root->left, res);
//         pre(root->right, res);
//     }

//     vector<int> preorderTraversal(TreeNode* root) {
//         vector<int> res;
//         pre(root, res);
//         return res;
        
//     }
};