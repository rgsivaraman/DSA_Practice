class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> s(nums1.begin(),nums1.end());
        set<int> s1(nums2.begin(),nums2.end());
        vector<int> ans;
        for(auto it:s){
            if(s1.find(it)!=s1.end()){
                ans.push_back(it);
            }
        }
        return ans;
    }
};