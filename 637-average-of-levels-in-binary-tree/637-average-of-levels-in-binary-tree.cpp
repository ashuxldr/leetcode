class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> res;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int size = q.size();
            double avg = 0.0;
            for(int i=0;i<size;i++){
                TreeNode* temp = q.front();
                avg+= temp->val;
                if(temp->left)
                    q.push(temp->left);
                if(temp->right)
                    q.push(temp->right);
                q.pop();
            }
            setprecision(6);
            avg = avg/size;
            res.push_back(avg);
        }
        return res;
    }
};