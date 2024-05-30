class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int s=0;
        int n=nums.size();
        int e=n-1;
        int mid=s+(e-s)/2;
        while(s<=e){
            if(s==e){
                return nums[s]; //single element
            }

            int curr=nums[mid];
            int leftval=-1; //(mid-1 value)
            if(mid-1>=0){
                leftval=nums[mid-1];
            }
            int rightval=-1;  //(mid+1) value
            if(mid+1<n){
                rightval=nums[mid+1];
            }

            if(curr!=leftval && curr!=rightval){
                return curr;
            }

            if(curr==leftval && curr!=rightval){
                int startindex=mid-1;
                if(startindex&1){  
                    e=mid-1;
                }
                else{
                    s=mid+1;
                }
            }

            if(curr!=leftval && curr==rightval){
                int startindex=mid;
                if(startindex&1){
                    e=mid-1;
                }
                else{
                    s=mid+1;
                }
            }

            mid=s+(e-s)/2;
        }
        return -1;
    }
};