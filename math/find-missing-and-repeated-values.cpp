class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int>arr;
        int n = grid.size();
    unordered_set<int> s;
    int currentsum = 0;
   int missing;
    int repeated;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            currentsum += grid[i][j];
            if (s.find(grid[i][j]) != s.end())
            {
                repeated = grid[i][j];
            }
            else
            {
                s.insert(grid[i][j]);
            }
        }
    }


    int N = n * n;
    int totalsum = N*(N + 1) / 2;
    missing = totalsum - currentsum + repeated;

   arr.push_back(repeated);
    arr.push_back(missing);
    return arr;

    }
};