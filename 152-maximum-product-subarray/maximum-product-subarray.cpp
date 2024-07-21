class Solution {
public:
    int maxProduct(vector<int>& nums) {
        double curr_max=nums[0],curr_min=nums[0],result=nums[0];
        for(int i=1;i<nums.size();i++){
            double curr=nums[i];
            double temp_max=curr_max,temp_min=curr_min;
            curr_max=max(temp_max*curr,temp_min*curr);
            curr_max=max(curr,curr_max);
            curr_min=min(temp_min*curr,temp_max*curr);
            curr_min=min(curr,curr_min);
            result=max(curr_max,result);
        }
        return result;

    }
};