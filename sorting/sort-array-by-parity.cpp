class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int size = nums.size();
    int idx = 0;
    int end = size -1;
    vector<int> ans(size,0);
    for (int i : nums)
    {
        if (i % 2 == 0)
        {
            ans[idx] = i;
            idx++;
        }
        else
        {
            ans[end]=i;
            end--;
        }
    }

        return ans;
    }
};