class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();

        int x = 0;
        for (int i : nums) {
            x ^= i;
        }
        return x;
    }
};