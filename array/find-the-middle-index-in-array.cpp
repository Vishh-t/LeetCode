class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int size = nums.size();
        int idx = 0;
        int sum = 0;
        int i = 0;
        int j = size - 1;
        while (i <= j) {

            if (i != j) {
                sum = sum + nums[i] + nums[j];
            }
            if (i == j) {
                sum += nums[i];
            }
            i++;
            j--;
        }

        int sumL = 0;
        int sumR = sum - nums[idx];

        if (sumL == sumR) {
            return idx;
        }
        while (idx < size - 1) {
            idx++;
            sumL += nums[idx - 1];
            sumR -= nums[idx];
            if (sumL == sumR) {
                return idx;
            }
        }

        return -1;
    }
};