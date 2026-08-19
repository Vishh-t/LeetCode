class Solution {
public:
    bool validMountainArray(vector<int>& nums) {
        int size = nums.size();
    if (size < 3)
    {
        return false;
    }

    int peakcount = 0;

    for (int i = 0; i < size-1; i++)
    {
        if (nums[i] == nums[i + 1])
        {
            return false;
        }
    }
    if (nums[0] > nums[1])
    {
        return false;
    }

    for (int i = 1; i < size - 1; i++)
    {
        if (nums[i - 1] < nums[i] && nums[i] > nums[i + 1])
        {
            peakcount++;
        }
    }

    if (nums[size - 1] >= nums[size - 2])
    {
        return false;
    }

    if (peakcount == 1)
    {
        return true;
    }

    return false;
    }
};