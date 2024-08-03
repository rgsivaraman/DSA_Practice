class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int max1=INT_MIN;
        int sum=0;
        for(int i=0;i<n;i++){
            sum=nums[n-i-1]+nums[i];
            max1=max(max1,sum);
        }
        return max1;
    }
};