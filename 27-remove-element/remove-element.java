class Solution {
    public int removeElement(int[] nums, int val) {
        int reader=0,writer=0;
        int n=nums.length;
        for(int i=0;i<n;i++){
            if(nums[reader]==val){
                reader++;
            }
            else{
                nums[writer]=nums[reader];
                writer++;
                reader++;
            }
        }
        return writer;
    }
}