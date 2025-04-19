class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size(), m = matrix[0].size();

        if(matrix[0][0] > target || matrix[n-1][m-1] < target){
            return 0;
        }

        int row_i;
        for(int i=0;i<n;i++){
            if(matrix[i][0] > target){
                break;
            } else {
                row_i = i;
            }
        }

        int l=0,r=m-1;
        while(l <= r){
            int mid = (l+r)/2;
            if(target < matrix[row_i][mid]){
                r = mid-1;
            } else if(target > matrix[row_i][mid]){
                l = mid+1;
            } else {
                return 1;
            }
        }

        return 0;
    }
};