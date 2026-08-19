class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        int size = nums.size();
        for (int i = 0; i < size; i++) {
            if (nums[i] != val) {
                nums.push_back(nums[i]);
            }
        }

        nums.erase(nums.begin(), nums.begin() + size);
        int ans = nums.size();

        return ans;
    }
};