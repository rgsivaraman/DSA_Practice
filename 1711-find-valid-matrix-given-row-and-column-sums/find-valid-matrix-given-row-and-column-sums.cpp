class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum)
    {
        int n=rowSum.size();
        int m=colSum.size();
        vector<vector<int>> mat(n,vector<int>(m,0));
        int i=0,j=0; //iterating row and col
        while(i<n && j<m){
            int minimum=min(rowSum[i],colSum[j]);
            mat[i][j]=minimum;
            rowSum[i] -= minimum;
            colSum[j] -= minimum;
            if (rowSum[i] == 0) {
                i++;
            }
            if (colSum[j] == 0) {
                j++;
            }
        }
        return mat;
    }
};