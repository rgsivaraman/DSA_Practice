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
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        unordered_map<int, TreeNode*> mp;
        set<int> children;
        for(auto it: descriptions){
            int parent = it[0], child = it[1], isLeft = it[2];
            TreeNode* parentNode;
            children.insert(child);
            if(mp.find(parent) == mp.end()){
                parentNode = new TreeNode(parent);
                mp[parent] = parentNode;
            }
            else{
                parentNode = mp[parent];
            }
            TreeNode* childNode;
            if(mp.find(child) == mp.end()){
                childNode = new TreeNode(child);
                mp[child] = childNode;
            }
            else{
                childNode = mp[child];
            }
            if(isLeft == 1){
                parentNode->left = childNode;
            }
            else{
                parentNode->right = childNode;
            }
        }
        TreeNode* root = nullptr;
        for(auto it: mp){
            if(children.find(it.first) == children.end()){
                root = it.second;
                break;
            }
        }
        return root;
    }
};