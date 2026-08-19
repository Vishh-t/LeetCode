class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int m = mat.size();
        int n = mat[0].size();
        int stR = 0;
        int endR = m - 1;
        

        if (mat[0][0] > target) {
            return false;
        }

        if (mat[m - 1][n - 1] < target) {
            return false;
        }
int midR;
        while (stR <= endR) {
             midR = stR + (endR - stR) / 2;
            if (mat[midR][0] <= target && target <= mat[midR][n - 1]) {
                
                break;
            } else if (mat[midR][0] > target) {
                endR = midR - 1;
            } else {
                stR = midR + 1;
            }
        }

        int st = 0;
        int end = n - 1;
        while (st <= end) {
            int mid = st + (end - st) / 2;
            if (mat[midR][mid] == target) {
                return true;
            } else if (mat[midR][mid] > target) {
                end = mid - 1;
            } else {
                st = mid + 1;
            }
        }

        return false;
    }
};