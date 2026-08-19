class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int size = nums.size();
    int maxi = INT_MIN;
    int index;
    for (int i = 0; i < size; i++)
    {
        if (nums[i] >= maxi)
        {
            maxi = max(maxi, nums[i]);
            index = i;
        }
    }

    sort(nums.begin(), nums.end());

    if (nums[size - 1] >= 2 * nums[size - 2])
    {
        return index;
    }
    
    
        return -1;
    
    }
};