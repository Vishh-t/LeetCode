class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int size = nums.size();
    sort(nums.begin(), nums.end());
    int duplicate;
    for (int i = 0; i < size - 1; i++)
    {
        if (nums[i] == nums[i + 1])
        {
            duplicate = nums[i];
        }
    }

    nums.erase(unique(nums.begin(), nums.end()), nums.end());

    int partialsum = 0;
    for (int i : nums)
    {
        partialsum += i;
    }

    int completesum = size * (size + 1) / 2;
    int missing = completesum - partialsum;
    vector<int> ans = {duplicate,missing};
    return ans;
    }
};