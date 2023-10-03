class Solution {
    public int numIdenticalPairs(int[] nums) {
        Map<Integer,Integer> mp=new HashMap<>();
        int count=0;
        for(int num:nums){
            count+=mp.getOrDefault(num,0);
            mp.put(num,mp.getOrDefault(num,0)+1);
        }
        return count;
    }
}