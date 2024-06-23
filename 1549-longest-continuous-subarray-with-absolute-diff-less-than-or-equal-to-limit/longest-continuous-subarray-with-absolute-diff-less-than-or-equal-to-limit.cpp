class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        multiset<int> mset;
        vector<int> ans;
        int n=nums.size();
        int maxsize=0;
        int i=0,j=0;
        while(j<n){
            mset.insert(nums[j]);
            int diff=*mset.rbegin()-*mset.begin();
            while(i<j && diff>limit){
                auto remove=mset.find(nums[i]);
                mset.erase(remove);
                i++;
                diff=*mset.rbegin()-*mset.begin();
        }
        maxsize=max(maxsize,(int)mset.size());
        j++;
        }
        return maxsize;
    }
};