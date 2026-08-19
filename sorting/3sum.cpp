class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;

        for (int i = 0; i < n; i++) {
            int j = i + 1;
            int k = n - 1;
            int target = -(nums[i]);
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }

            while (j < k) {
                int sum = nums[j] + nums[k];

                if (target > sum) {
                    j++;
                } else if (target < sum) {
                    k--;
                }

                else {

                    vector<int> trip = {nums[i], nums[j], nums[k]};
                    ans.push_back(trip);

                    j++;
                    k--;
                    while (j < k && nums[j] == nums[j - 1]) {
                        j++;
                    }
                }
            }
        }
        return ans;
    }
};