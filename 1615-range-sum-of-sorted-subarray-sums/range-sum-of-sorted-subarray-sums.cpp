class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int> subarr;
        for(int i=0;i<nums.size();i++){
            int sum=0;
            for(int j=i;j<nums.size();j++){
                sum+=nums[j];
                subarr.push_back(sum);
            }
        }
        sort(subarr.begin(),subarr.end());

        int rangesum=0,mod=1e9+7;
        for(int i=left-1;i<right;i++){
            rangesum=(rangesum+subarr[i])%mod;
        }
        return rangesum;
    }
};