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
    vector<int> largestValues(TreeNode* root) {
        queue<TreeNode*> q;
        vector<int> res;
        q.push(root);
        if (root == nullptr) {
            return vector<int>{};
        }
        while(!q.empty()){
            int currLength=q.size();
            int currMax=INT_MIN;
            for(int i=0;i<currLength;i++){
            TreeNode* curr=q.front();
            currMax=max(curr->val,currMax);
            q.pop();
            if(curr->left!=nullptr){
                q.push(curr->left);
            }
            if(curr->right!=nullptr){
                q.push(curr->right);
            }
            }
            res.push_back(currMax);
        }
        return res;
    }
};