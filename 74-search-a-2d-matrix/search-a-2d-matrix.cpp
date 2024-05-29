class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        //binary search
        int row=matrix.size();
        int col=matrix[0].size();
        int n=row*col;
        int s=0;
        int e=n-1;
        int mid=(s+(e-s))/2;
        while(s<=e){
            int rowi=mid/col;
            int coli=mid%col;
            if(matrix[rowi][coli]==target){
                return true;
            }
            else if(target>matrix[rowi][coli]){
                s=mid+1;
            }
            else if(target<matrix[rowi][coli]){
                e=mid-1;
            }
            mid=s+(e-s)/2;
        }
        return false;
    }
};