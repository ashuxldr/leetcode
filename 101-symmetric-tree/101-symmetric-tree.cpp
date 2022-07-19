class Solution {
public:

bool sameTree(TreeNode* lr,TreeNode* rr){
    
    if(!lr && !rr)
        return true;
    
    if(!lr || !rr)
        return false;
    
    if(lr->val != rr->val)
        return false;
    
    return sameTree(lr->left,rr->right) && sameTree(lr->right,rr->left);
}

bool isSymmetric(TreeNode* root) {
    if(root == nullptr)
        return true;
    
    return sameTree(root->left,root->right);
}
};