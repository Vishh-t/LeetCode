class Solution {
public:
    bool uniqueOccurrences(vector<int>& nums) {
        int size = nums.size();
    vector<int> freq(2001, 0); 
    for (int i = 0; i < size; i++)
    {
        if (nums[i] >= 0)
        {
            freq[nums[i]]++;
        }
        else
        {
            freq[2001 + nums[i]]++;
        }
    }

    for (int i = 0; i < 2001; i++)
    {
        if (freq[i] == 0) continue;
        for (int j = i + 1; j < 2001; j++)
        {
            if (freq[j] == 0) continue;
            if (freq[i] == freq[j])
            {
                return false;
            }
        }
    }
   return true;
    }
};