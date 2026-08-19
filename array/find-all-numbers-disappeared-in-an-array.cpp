class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int size = nums.size();
        vector<int> freq(size + 1, 0);
        vector<int> ans;

        for (int i = 0; i < size; i++) {
            freq[nums[i]]++;
        }
        for (int i = 1; i < size + 1; i++) {
            if (freq[i] == 0) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};