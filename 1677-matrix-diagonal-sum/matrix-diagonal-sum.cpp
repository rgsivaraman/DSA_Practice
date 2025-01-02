class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=mat[i][i];
        }
        int ind=0;
        for(int j=n-1;j>=0;j--){
            sum+=mat[ind][j];
            if(ind==j){
                sum-=mat[ind][j];
            }
            ind++;
        }
        return sum;
    }
};