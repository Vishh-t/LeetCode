class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int size = nums.size();

    vector<int> freq(size + 1, 0);

    for (int i = 0; i < size; i++)
    {
        freq[nums[i]]++;
    }

    for (int i = 0; i < size + 1; i++)
    {
        if (freq[i] == 0)
        {
            return i;
        }
    }
    return -1;
    }
};