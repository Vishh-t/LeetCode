class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
         vector<int> ans;
    int m = mat.size();
    int n = mat[0].size();
    int topR = 0;
    int bottomR = m - 1;
    int leftC = 0;
    int rightC = n - 1;
    int count = 0;
    while (count < m * n)
    {
        for (int j = leftC; j <= rightC; j++)
        {
            ans.push_back(mat[topR][j]);
            count++;
        }
        if (count < m * n)
        {
            for (int i = topR + 1; i <= bottomR; i++)
            {
                ans.push_back(mat[i][rightC]);
                count++;
            }
        }
        if (count < m * n)
        {
            for (int j = rightC - 1; j >= leftC; j--)
            {
                ans.push_back(mat[bottomR][j]);
                count++;
            }
        }
        if (count < m * n)
        {
            for (int i = bottomR - 1; i >= topR + 1; i--)
            {
                ans.push_back(mat[i][leftC]);
                count++;
            }
        }
        topR++;
        bottomR--;
        leftC++;
        rightC--;
    }

    return ans;

    }
};