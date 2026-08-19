class Solution {
public:
    set<vector<int>> s; // we must define it globally so that it can track
                        // across all the recursive branches
    void allsums(vector<int>& nums, int idx, int target,
                 vector<vector<int>>& ans, vector<int> combin) {

        int n = nums.size();
        // base cases
        if (idx == n || target < 0) {
            return;
        }
        if (target == 0) {
            if (s.find(combin) == s.end()) {
                s.insert(combin);
                ans.push_back(combin);
                return;
            } else {
                return;
            }
        }

        combin.push_back(nums[idx]);
        // single inclusion call
        allsums(nums, idx + 1, target - nums[idx], ans, combin);
        // multiple inclusion call
        allsums(nums, idx, target - nums[idx], ans, combin);
       
        combin.pop_back();
        // exclusion call
        allsums(nums, idx + 1, target, ans, combin);
    }
    vector<vector<int>> combinationSum(vector<int>&nums, int target) {

        vector<vector<int>> ans;
        vector<int> combin;
        allsums(nums, 0, target, ans, combin);
        return ans;
    }
};