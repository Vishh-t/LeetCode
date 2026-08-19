class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int size = nums.size();
    sort(nums.begin(), nums.end());
    int sum = 0;
    int i = 0;
    while (i < size - 1)
    {
        sum += min(nums[i], nums[i + 1]);
        i = i + 2;
    }
    return sum;
    }
};