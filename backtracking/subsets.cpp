class Solution {
public:
    void powerset(vector<int>& arr, vector<int>& ans, int i,
                  vector<vector<int>>& answer) {

        if (i == arr.size()) {
            answer.push_back(ans);
            return;
        }

        // include
        ans.push_back(arr[i]);
        powerset(arr, ans, i + 1, answer);

        ans.pop_back(); // backtracking

        // exclude
        powerset(arr, ans, i + 1, answer);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> ans;

        vector<vector<int>> answer;
        powerset(nums, ans, 0, answer);
        return answer;
    }
};