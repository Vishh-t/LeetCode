class Solution {
public:
    int findLucky(vector<int>& nums) {
        int size = nums.size();
        vector<int> freq(501, 0);
        int ans = INT_MIN;

        for (int i = 0; i < size; i++) {
            freq[nums[i]]++;
        }
        int exist = 0;
        for (int i = 1; i < size + 1; i++) {
            if (freq[i] == i) {
                ans = max(ans,i);
                exist =1;
            }
        }
        if(exist)
        return ans;
        else {
            return -1;
        }
    }
};