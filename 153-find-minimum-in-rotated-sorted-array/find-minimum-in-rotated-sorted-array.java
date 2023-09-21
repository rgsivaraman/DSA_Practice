class Solution {
    public int findMin(int[] nums) {
        int n=nums.length;
        int low=0,high=n-1,ans=Integer.MAX_VALUE;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]>=nums[low]){
                ans=Math.min(ans,nums[low]);
                low=mid+1;
            }
            else if(nums[mid]<=nums[high]){
                ans=Math.min(ans,nums[mid]);
                high=mid-1;
            }
        }
        return ans;
    }
}