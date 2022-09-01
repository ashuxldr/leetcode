class Solution {
private:
    void solve(TreeNode* root, vector<int> v,int &c){
        if(root==NULL)
            return;
        if(root->val >= v.back()){
            v.push_back(root->val);
            ++c;
        }
        solve(root->left,v,c);
        solve(root->right,v,c);
    }    
public:
    int goodNodes(TreeNode* root) {
        vector<int> v;
        int c = 0;
        v.push_back(root->val);
        solve(root,v,c);
        return c;
    }
};