class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n=customers.size(); //minutes is the window size
        int zerosum=0,windsum=0,maxwindsum=0;
        for(int i=0;i<n;i++){
            if(grumpy[i]==0){
                zerosum+=customers[i];
            }
            if(i<minutes){
                windsum+=(grumpy[i]==1?customers[i]:0);
            }
            else{
                windsum+=(grumpy[i]==1?customers[i]:0)-(grumpy[i-minutes]==1?customers[i-minutes]:0);
            }
            maxwindsum=max(maxwindsum,windsum);
        }
        return maxwindsum+zerosum;
    }
};