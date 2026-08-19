class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int m = mat.size();
        int n = mat[0].size();
        int row = 0;
        int col = n - 1;
        if (mat[0][0] > target) {
            return false;
        }
        if (mat[m - 1][n - 1] < target) {
            return false;
        }
        while (row < m && col >= 0) {
            if (mat[row][col] == target) {
                return true;
            } else if (mat[row][col] > target) 
            {
                col--;
            } else 
            {
                row++;
            }
        }

        return false;
    }
};