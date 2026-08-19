class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& nums) {
        int rows = nums.size();
    int cols = nums[0].size();
    vector<vector<int>> temp(cols, vector<int>(rows));
    
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            temp[j][i] = nums[i][j];
        }
    }
    return temp;
    }
};