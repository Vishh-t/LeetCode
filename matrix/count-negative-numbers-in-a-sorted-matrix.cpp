class Solution {
public:
    int countNegatives(vector<vector<int>>& mat) {
         int m = mat.size();
    int n = mat[0].size();
    int count = 0;
    int c = n - 1;
    int r = 0;

    while (c >= 0 && r <= m - 1)
    {
        if (mat[r][c] >= 0)
        {
            r++;
        }
        else
        {
            count = count + m - r;
            c--;
        }
    }
    return count ;
    }
};