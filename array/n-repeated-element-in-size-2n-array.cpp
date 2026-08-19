class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
         int size = nums.size();
    vector<int> freq(10000, 0);
    for (int i = 0; i < size; i++)
    {
        freq[nums[i]]++;
    }
    for (int i = 0; i < 10000; i++)
    {
        if (freq[i] == size / 2)
        {
            return i;
        }
    }
    return -1;
    }
};