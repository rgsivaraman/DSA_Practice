class Solution {
public:
    void solve(TreeNode* root,int& count,int& ans,int k){
        if(root==nullptr) return;
        solve(root->left,count,ans,k);
        count++;
        if(count==k){
            ans=root->val;
            return;
        }
        solve(root->right,count,ans,k);
    }
    int kthSmallest(TreeNode* root, int k) {
        int count=0;
        int ans;
        solve(root,count,ans,k);
        return ans;
    }
};