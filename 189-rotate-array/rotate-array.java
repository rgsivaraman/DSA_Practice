class Solution {
    public void rotate(int[] nums, int k) {
        int n=nums.length;
        k=k%n;
        int l=n-k;
        reversenum(nums,0,l-1);
        reversenum(nums,l,n-1);
        reversenum(nums,0,n-1);
    }

    public void reversenum(int[] nums,int start,int end){
        while(start<end){
            int temp=nums[start];
            nums[start]=nums[end];
            nums[end]=temp;
            start++;
            end--;
        }
    }
}