class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int counter=0,currsum=0;
        unordered_map<int,int> mp;//prefsum,freq
        mp[0]=1;
        for(int i=0;i<nums.size();i++){
            currsum+=nums[i];
            if(mp.find(currsum-k)!=mp.end()){
                counter+=mp[currsum-k];
            }
            mp[currsum]++;
        }
        return counter;
    }
};