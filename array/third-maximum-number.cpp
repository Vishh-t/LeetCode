class Solution {
public:
    int thirdMax(vector<int>& nums) {
         sort(nums.begin(), nums.end());
    nums.erase(unique(nums.begin(), nums.end()), nums.end());
    int size = nums.size();
    if (size < 3)
    {
        return nums[size - 1];
    }

    else
    {
        return nums[size - 3];
    }
    }
};