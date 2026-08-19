class Solution {
public:
    int maximumWealth(vector<vector<int>>& mat) {
        ios_base::sync_with_stdio(false);
cin.tie(NULL);
        int m = mat.size();
    int n = mat[0].size();
    int accW = INT_MIN;
    for (int i = 0; i < m; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum += mat[i][j];
        }
        accW = max(accW, sum);
    }

    return accW;
    }
};