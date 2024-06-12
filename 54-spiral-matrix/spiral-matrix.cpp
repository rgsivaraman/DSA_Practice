class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int n=matrix.size();
        int m=matrix[0].size();
        int totalelements=n*m;
        int count=0;

        int srow=0;
        int erow=n-1;
        int scol=0;
        int ecol=m-1;
        while(count<totalelements){
            for(int i=scol;i<=ecol&& count<totalelements;i++){
                ans.push_back(matrix[srow][i]);
                count++;
            }
            srow++;
            for(int i=srow;i<=erow && count<totalelements;i++){
                ans.push_back(matrix[i][ecol]);
                count++;
            }
            ecol--;
            for(int i=ecol;i>=scol && count<totalelements;i--){
                ans.push_back(matrix[erow][i]);
                count++;
            }
            erow--;
            for(int i=erow;i>=srow && count<totalelements;i--){
                ans.push_back(matrix[i][scol]);
                count++;
            }
            scol++;
        }
        return ans;
    }
};