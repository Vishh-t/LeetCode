class Solution {
public:
    void subsets(vector<int> arr, vector<int> ans, vector<vector<int>>& answer,
                 int i) {
        if (i == arr.size()) {
            answer.push_back(ans);
            return;
        }

        // include
        ans.push_back(arr[i]);
        subsets(arr, ans, answer, i + 1);

        // backtracking
        ans.pop_back();

        int idx = i + 1;
        while (idx < arr.size() && arr[idx] == arr[idx - 1]) {
            idx++;
        }

        // exclude
        subsets(arr, ans, answer, idx);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> ans;
        vector<vector<int>> answer;
        subsets(nums, ans, answer, 0);
        return answer;
    }
};