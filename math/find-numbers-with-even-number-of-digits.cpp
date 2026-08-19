class Solution {
public:bool even(int n)
{
    int count;
    count = (int)log10(n) + 1;

    if (count % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
    int findNumbers(vector<int>& nums) {
        int size = nums.size();
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (even(nums[i]))
        {
            count++;
        }
    }
    return count;
    }
};