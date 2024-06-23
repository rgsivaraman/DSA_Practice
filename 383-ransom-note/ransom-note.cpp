class Solution {
public:
    bool canConstruct(string nums, string magazine) {
        int m=magazine.size(),n=nums.size();
        unordered_map<char,int> mp;
        for(int i=0;i<m;i++){
            mp[magazine[i]]++;
        }
        for(int i=0;i<n;i++){
            if(mp.find(nums[i])!=mp.end() && mp[nums[i]]>0){
                mp[nums[i]]--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};