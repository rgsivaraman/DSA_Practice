class Solution {
public:
    void backtrack(vector<int>& nums,int i,vector<int>& path,vector<vector<int>>& result){
        if(i>=nums.size()){
            result.push_back(path);
            return;
        }
        path.push_back(nums[i]);
        backtrack(nums,i+1,path,result);
        path.pop_back();
        backtrack(nums,i+1,path,result);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> path;
        backtrack(nums,0,path,result);
        return result;
    }
};