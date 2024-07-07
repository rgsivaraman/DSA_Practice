class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int left=0,right=n-1;
        int start=-1,end=-1;
        int mid=left+(right-left)/2;
        vector<int> res;
        while(left<=right){
            if(nums[mid]<target){
                left=mid+1;
            }
            else if(nums[mid]>target){
                right=mid-1;
            }
            else{
                start=mid;
                end=mid;
                while(start>0 && nums[start-1]==target){
                    start--;
                }
                while(end<n-1 && nums[end+1]==target){
                    end++;
                }
                break;
            }
            mid=left+(right-left)/2;
        }
        res.push_back(start);
        res.push_back(end);
        return res;
    }
};