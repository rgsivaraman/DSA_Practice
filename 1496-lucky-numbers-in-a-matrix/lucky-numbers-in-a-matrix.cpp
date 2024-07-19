class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<int> row_min(n, INT_MAX);
        vector<int> col_max(m, INT_MIN);
        vector<int> res;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                row_min[i] = min(row_min[i], matrix[i][j]);
                col_max[j] = max(col_max[j], matrix[i][j]);
            }
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(row_min[i]==matrix[i][j] && matrix[i][j]==col_max[j]){
                    res.push_back(matrix[i][j]);
                }
            }
        }
        
        return res;
    }
};