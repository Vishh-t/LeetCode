class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int size = nums.size();
    int st = 0;
    int end = k - 1;
double maxsum = INT_MIN;
    double sum = 0;

    for (int i = st; i <= end; i++)
    {
        sum += nums[i];
    }
    maxsum = max(maxsum, sum/k);
    end = k;
    st = 0;
    while (end < size)
    {
        sum += nums[end];
        sum -= nums[st];
        maxsum = max(maxsum, sum/k);
        st++;
        end++;
    }

   
    return maxsum;
    }
};