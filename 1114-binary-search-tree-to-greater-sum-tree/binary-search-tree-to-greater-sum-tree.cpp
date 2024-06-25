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
    int globalsum;
    void solve(TreeNode* node){
        if(node==nullptr) return ;
        solve(node->right);
        globalsum+=node->val;
        node->val=globalsum;
        solve(node->left);
        return;
    }
    TreeNode* bstToGst(TreeNode* root) {
        globalsum=0;
        solve(root);
        return root;
    }
};