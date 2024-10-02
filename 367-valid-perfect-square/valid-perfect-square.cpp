class Solution {
public:
    bool isPerfectSquare(int num) {
        long long low=1,high=num;
        while(low<=high){
            long long mid=(low+high)/2;
            long long squared=mid*mid;
            if(squared<num){
                low=mid+1;
            }
            else if(num<squared) {
                high=mid-1;
            }
            else if(num==squared){
                return true;
            }
        }
        return false;
    }
};